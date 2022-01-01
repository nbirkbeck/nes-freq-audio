fprintf("int num_audio_wait = 3;\n");

for chan=1:2,
  fprintf("unsigned short audio_signal%d[2048] = {", chan);
  fprintf('%d,', sel_4096(chan, 1:1024, 1))
  fprintf("};\n");

  fprintf("char vol%d[1024] = {", chan);
  fprintf('%d,', min(15, int32(round(15 * vol(chan, 1:1024, 1)/128))))
  fprintf("};\n");
end

n_sort = sort(ns(1:1024));
max_noise = n_sort(floor(0.75 * length(n_sort)))

ns_tx = ((ns .* (ns > 0.8 * max_noise)) / max_noise).^2;

fprintf("char noise_vol%d[1024] = {", chan);
fprintf('%d,', min(15, int32(round(15 * ns_tx(1:1024)/max(ns_tx(1:1024))))));
fprintf("};\n");