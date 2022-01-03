function analyze_wav_file(input_video, output_prefix)
  signal = wavread(input_video);

  other_args = struct('low_freq', 20, 'high_freq', 2000, ...
                      'triangle_first', 1, ...
                      'attenuate_sigma', 0.035, ...
                      'clear_all_freq', 1);
  noise_strength = 1.5;
  for tri=[0, 1],
    other_args.triangle_first = tri;
    for bs=[2048,4096],
      % Only process a subset of the audio signal (1024 frames of block_size=bs)
      [blocks, out, sc, ns, sel, vol] = audio_rep(signal(1:(bs)*(1024 + 2), 1), bs, noise_strength, other_args);
      generate_c_data(sprintf('rom/%s_tri%d_%d.c', output_prefix, tri, bs), sel, vol, ns, bs);
      system(sprintf('make -C rom %s_tri%d_%d.rom', output_prefix, tri, bs))
    end
  end
