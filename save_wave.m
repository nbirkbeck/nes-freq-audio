function [f]=save_wave(output_filename, sel, vol, ns, bs)

len = 800;
f = fopen(output_filename, 'w');
num_wait = 3 * (bs / 2048);
fprintf(f, "int num_audio_wait = %d;\n", num_wait);
fprintf(f, "int num_audio_signal = %d;\n", len);

for chan=1:3,
  if chan==1,
    fprintf(f, "unsigned short triangle_signal[%d] = {", len);
  else
    fprintf(f, "unsigned short square%d_signal[%d] = {", chan-1, len);
  end
  fprintf(f, '%d,', sel(chan, 1:len, 1))
  fprintf(f, "};\n");

  if chan==1,
    fprintf(f, "char triangle_vol[%d] = {", len);
  else
    fprintf(f, "char square%d_vol[%d] = {", chan-1, len);
  end
  fprintf(f, '%d,', min(15, int32(round(15 * vol(chan, 1:len, 1)/128))))
  fprintf(f, "};\n");
end

n_sort = sort(ns(1:1024));
max_noise = n_sort(floor(0.75 * length(n_sort)))

ns_tx = ((ns .* (ns > 0.8 * max_noise)) / max_noise).^2;

fprintf(f, "char noise_vol[%d] = {", len);
fprintf(f, '%d,', min(15, int32(round(15 * ns_tx(1:len)/max(ns_tx(1:len))))));
fprintf(f, "};\n");
fclose(f);