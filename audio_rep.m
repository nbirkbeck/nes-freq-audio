function [blocks, output, score, noise, selected, volume]=audio_rep(signal, bs, noise_strength)
if nargin < 2,
  bs = 2048;
end
if nargin < 3
  noise_strength = 1;
end
output = zeros(size(signal));
overlap = 0;
if overlap
  num_blocks = size(signal, 1) / (bs/2) - 1;
  win = window(bs);
else
  num_blocks = size(signal, 1) / (bs) - 1;
  win = ones(1, bs);
end

low_freq = 20;
high_freq = 4000;

%% Old, testing using synthetic curves.
if 0,
  base_freq = 44100;

  frame_duration = bs / base_freq;
  native_freq = 1:bs;
  actual_freq = native_freq / frame_duration;
  I = find((actual_freq >= low_freq) & (actual_freq <= high_freq));
  native_freq = native_freq(I);
  actual_freq = actual_freq(I);
  
  basis1 = mod(native_freq' * 2 * ([1:bs] - 0.5)/bs, 2) - 1;
  basis2 = 2 * (sin(pi + 2 * pi * (native_freq' * ([1:bs] - 1)/bs)) > 0) - 1;
end

mult = 1790000 / 44100;

basis1 =  repmat([0:(bs-1)] * mult, [2048, 1]) ./ repmat([1:2048]', [1, bs]);
basis1 = (mod(basis1 - 16, 32) - 2 * mod(basis1, 32) .* mod(floor((basis1 - 16) / 16), 2) - 8);
basis1 = basis1 / 8;

basis1 = make_basis(basis1, 32 / 1790000 * [1:2048]', low_freq, high_freq, win, bs);


basis2 = repmat([0:(bs-1)] * mult, [2048, 1]) ./ repmat([1:2048]', [1, bs]);
basis2 = [mod(basis2, 16) < 2,
          mod(basis2, 16) < 4,
          mod(basis2, 16) < 8,
          mod(basis2, 16) < 12] * 2 - 1;

basis2 = make_basis(basis2, repmat(16 / 1790000 * [1:2048]', [4, 1]), low_freq, high_freq, win, bs);

bases = {basis1, basis2};
num_keep = [1, 2];
if 0,
  plot([1:bs]/bs, basis1(100, :), 'r'); hold on;
  plot([1:bs]/bs + 0.05, basis2(100, :) + 0.05, 'b'); hold on;
end


score = zeros(size(bases{1}.basis, 1), num_blocks);
noise = zeros(1, num_blocks);
n_f = norm(fft(win' .* (randn(bs, 1)*2 -1 )))

selected = zeros(sum(num_keep), num_blocks, size(signal, 2));
for chan=1:size(signal, 2)
  blocks = complex(zeros(bs, num_blocks));
  blocks2 = complex(zeros(bs, num_blocks));
  bi = 1;
  I = 1:bs;
  if overlap
    skip = bs/2;
  else
    skip = bs;
  end
  for i=1:skip:(size(signal, 1) - bs),
    blocks(:, bi) = fftshift(fft(win' .* signal((i-1)+I, chan)));
    block_out = blocks(:, bi) * 0;

    num_selected = 1;
    for basis_i=1:length(bases),
      A = bases{basis_i}.basis_a * abs(blocks(:, bi));
      peaks = find_peaks(abs(A));
      basis = bases{basis_i}.basis;
      if length(peaks) > 0,
        A_p = abs(basis(peaks(1:min(num_keep(basis_i), length(peaks))), :) * blocks(:, bi));
        for pi=1:min(num_keep(basis_i), length(peaks)),
          p = peaks(pi);
          selected(num_selected, bi, chan) = bases{basis_i}.freq_index(p); %actual_freq(1 + mod(p - 1, length(native_freq)));
          volume(num_selected, bi, chan) = A_p(pi);
          %if p <= length(native_freq),
          %  selected(pi, bi, chan) = -selected(pi, bi, chan);
          %end
          block_out += (basis(p, :) * A_p(pi))';
          num_selected += 1;
        end

        if basis_i == 1,
          score(:, bi) = abs(A);
        end

        for k=-1:1,
          score(min(size(score, 1), max(1, peaks + k)), bi) = 0;
        end
        
        if basis_i == length(bases),
          noise(bi) = mean(score(find(score(:, bi)), bi), axis=1) * noise_strength;
        end

        block_out += noise(bi)  * fftshift(fft(win' .* (randn(bs, 1) * 2 - 1))) / n_f;
      end
    end
    blocks(:, bi) = block_out;
    if mod(bi, 10) == 0,
      fprintf("%f\n", 100.0 * bi / num_blocks)
    end
    bi = bi + 1;
  end
  
  bi = 1;
  for i=1:skip:(size(signal, 1) - bs),
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
return

function basis=make_basis(basis, native_wavelength, low_freq, high_freq, win, bs)
actual_freq = 1.0 ./ native_wavelength;
I = find((actual_freq >= low_freq) & (actual_freq <= high_freq));
raw = basis(I, :);

basis = fftshift(fft(raw * diag(win), bs, 2), 2);
for i=1:size(basis, 1),
  basis(i, :) = basis(i, :) / norm(basis(i, :));
end
basis_a = abs(basis);
basis=struct('raw', raw, ...
             'basis', basis, ...
             'basis_a', basis_a, ...
             'actual_freq', actual_freq,
             'freq_index', I);
return
