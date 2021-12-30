function [blocks, output, score, noise]=audio_rep(signal, bs)
if nargin < 2,
  bs = 2048;
end
win = window(bs);
size(win)
output = zeros(size(signal));
size(output)
num_blocks = size(signal, 1) / (bs/2) - 1;

base_freq = 44100;
freq = [40:4:10000];


basis1 = mod(freq' * 2 * [1:bs]/base_freq, 2) - 1;
basis2 = 2 * (sin(2 * pi * (freq' * 2 * [1:bs]/base_freq)) > 0) - 1;
basis = [basis1; basis2];
basis = fftshift(fft(basis * diag(win), bs, 2), 2);
for i=1:size(basis, 1),
  basis(i, :) = basis(i, :) / norm(basis(i, :));
end
basis_a = abs(basis);

score = zeros(size(basis, 1), num_blocks);
noise = zeros(1, num_blocks);
n_f = norm(fft(win' .* (randn(bs, 1)*2 -1 )))

for chan=1:size(signal, 2)
  blocks = complex(zeros(bs, num_blocks));
  blocks2 = complex(zeros(bs, num_blocks));
  bi = 1;
  I = 1:bs;
  for i=1:(bs/2):(size(signal, 1) - bs),
    blocks(:, bi) = fftshift(fft(win' .* signal((i-1)+I, chan)));
    
    A = basis_a * abs(blocks(:, bi));
    peaks = find_peaks(abs(A));
    A_p = basis(peaks, :) * blocks(:, bi);
    blocks(:, bi) = 0;
    for pi=1:min(4, length(peaks)),
      p = peaks(pi);
      blocks(:, bi) = blocks(:, bi) + (basis(p, :) * A_p(pi))';
    end
    score(:, bi) = abs(A);
    for k=-1:1,
      score(min(size(score, 1), max(1, peaks + k)), bi) = 0;
    end

    noise(bi) = mean(score(find(score(:, bi)), bi), axis=1) * 1.5;
    blocks(:, bi) += noise(bi)  * fftshift(fft(win' .* (randn(bs, 1) * 2 - 1))) / n_f;
    if mod(bi, 10) == 0,
      fprintf("%f\n", 100.0 * bi / num_blocks)
    end
    bi = bi + 1;
  end
  
  bi = 1;
  for i=1:(bs/2):(size(signal, 1) - bs),
    r = real(win' .* ifft(ifftshift(blocks(:, bi))));
    J = (i-1)+I;
    output(J, chan) = output(J, chan) + r;
    bi = bi + 1;
  end
end

return
num = bs * (num_blocks / 2 - 4);
best = 1e10;
best_val = 0;
for k=(-(bs-1)):(bs-1),
  mn = mean(abs(signal(bs:num, :)  - output([bs:num] + k, :)));
  if mn < best,
    best = mn;
    best_val = k;
  end
end
best_val

function cand=find_peaks(s)
x = [-10:10]';
g = exp(-x.^2);
g = g / mean(g);
s = abs(conv(s, g, 'same'));
I = find((s(2:(end-1)) > s(1:(end-2))) .* (s(2:(end-1)) > s(3:end)));
cand = I + 1; 
if 0; 
  cand = [];
  for i=2:1:(length(s)-1),
    if (s(i) > s(i - 1)) && (s(i) > s(i + 1))
      cand = [cand; i];
    end
  end
end
[_, j] = sort(-s(cand));
cand = cand(j);
return;

function win = window(bs)
win = cos(pi * [0:(bs-1)]/bs - pi/2);
