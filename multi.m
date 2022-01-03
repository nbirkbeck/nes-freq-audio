

[blocks, out, sc, ns, sel_4096, vol] = audio_rep(signal(1:(2048*4)*1024, 1), 2*2048, 0.5, struct('low_freq', 10, 'high_freq', 60));
save_wave('cc65/radiohead_4x_v1.c', sel_4096, vol, ns, 2048*2);
[blocks, out, sc, ns, sel_4096, vol] = audio_rep(signal(1:(2048*4)*1024, 1), 2*2048, 0.5, struct('low_freq', 60, 'high_freq', 160));
save_wave('cc65/radiohead_4x_v2.c', sel_4096, vol, ns, 2048*2);
[blocks, out, sc, ns, sel_4096, vol] = audio_rep(signal(1:(2048*4)*1024, 1), 2*2048, 0.5, struct('low_freq', 160, 'high_freq', 160*2));
save_wave('cc65/radiohead_4x_v3.c', sel_4096, vol, ns, 2048*2);
[blocks, out, sc, ns, sel_4096, vol] = audio_rep(signal(1:(2048*4)*1024, 1), 2*2048, 0.5, struct('low_freq', 160*2, 'high_freq', 800));
save_wave('cc65/radiohead_4x_v4.c', sel_4096, vol, ns, 2048*2);