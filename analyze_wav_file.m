function analyze_wav_file(input_video, output_prefix)
 signal = wavread(input_video);
 for bs=[2048,4096],
   [blocks, out, sc, ns, sel_4096, vol] = audio_rep(signal(1:(bs)*(1024 + 2), 1), bs, 1.5);
   save_wave(sprintf('cc65/%s_%d.c', output_prefix, bs), sel_4096, vol, ns, bs);
   system(sprintf('make -C cc65 %s_%d.rom', output_prefix, bs))
 end
   