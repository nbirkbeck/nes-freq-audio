function analyze_wav_file(input_video, output_prefix)
 signal = wavread(input_video);
 for bs=[2048,4096],
   % Only process a subset of the audio signal (1024 frames of block_size=bs)
   [blocks, out, sc, ns, sel, vol] = audio_rep(signal(1:(bs)*(1024 + 2), 1), bs, 1.5);
   generate_c_code(sprintf('rom/%s_%d.c', output_prefix, bs), sel, vol, ns, bs);
   system(sprintf('make -C rom %s_%d.rom', output_prefix, bs))
 end
   