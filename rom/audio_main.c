// This main driver is meant to be linked against an audio data file
// that contains the sound representation.
// See analyze_wav_file.m on how to generate this representation.
extern int num_audio_signal;
extern int num_audio_wait;
extern unsigned short square1_signal[];
extern unsigned short square2_signal[];
extern unsigned short triangle_signal[];
extern char square1_vol[];
extern char square2_vol[];
extern char triangle_vol[];
extern char noise_vol[];

// These functions are helpers that are defined in cc65 assembly NES library.
void waitvsync();
void cputcxy(unsigned char x, unsigned char y, char c);
void clrscr();

void update_wave_audio(char* ptr, int i, unsigned short* audio_signal,
                       char* vol) {
  short sig = 0;
  if (i == 0 || audio_signal[i] != audio_signal[i - 1]) {
    // Set the volume, disable enveloping, and set the duty type of the
    // audio signal (bits 11, 12, 13 of audio_signal for the square wave)
    ptr[0] = (0x10) | (vol[i]) | (((audio_signal[i] >> 11) & 0x3) << 6);

    // Set the wavelength
    sig = audio_signal[i] & 0x7FF;
    if (sig > 0x7FF)
      sig = 0x7FF;
    ptr[2] = sig & 0xFF;
    ptr[3] = (sig >> 8) & 0x7 | (0x1 << 3);
  }
}

void update_noise_wave_audio(char* ptr, int i, char* vol) {
  short sig = 0;
  if (i == 0 || vol[i] != vol[i - 1]) {
    ptr[0] = (0x10) | (vol[i]);

    ptr[2] = 1;
    ptr[3] = 5;
  }
}

#define APU_BASE 0x4000
#define JOY1 0x4016

#define apu_base_ptr ((char*)0x4000)

char channel_index = 0;

int main() {
  int i = 0, j = 0, k = 0;
  int lasti = 0, dummy = 0;

  clrscr();

  // Base register for square and triangle waves
  apu_base_ptr[1 + 0x0] = 0x7F;
  apu_base_ptr[1 + 0x4] = 0x7F;
  apu_base_ptr[1 + 0x8] = 0x7F;

  // Enable all output channels  (0x3 == square)
  apu_base_ptr[0x15] = 0x3 | 0x4 | 0x8;

  // Draw a small HUD
  cputcxy(7, 21, 'S');
  cputcxy(7, 22, 'Q');
  cputcxy(7, 23, '1');

  cputcxy(12, 21, 'S');
  cputcxy(12, 22, 'Q');
  cputcxy(12, 23, '2');

  cputcxy(17, 21, 'T');
  cputcxy(17, 22, 'R');
  cputcxy(17, 23, 'I');

  cputcxy(22, 21, 'N');
  cputcxy(22, 22, 'O');
  cputcxy(22, 23, 'I');
  cputcxy(22, 24, 'S');
  cputcxy(22, 25, 'E');

  while (1) {
    waitvsync();
    j++;

    if (j == num_audio_wait) {
      const int display_freq = 2;

      update_wave_audio(apu_base_ptr, i, square1_signal, square1_vol);
      update_wave_audio(apu_base_ptr + 0x4, i, square2_signal, square2_vol);
      update_wave_audio(apu_base_ptr + 0x8, i, triangle_signal, triangle_vol);
      update_noise_wave_audio(apu_base_ptr + 0xC, i, noise_vol);

      // Update the display every few frames (to avoid slow-down)
      if (i % display_freq == 0) {
        cputcxy(7, 18 - ((square1_signal[lasti] >> 7) & 0xF), 0);
        cputcxy(7, 18 - ((square1_signal[i] >> 7) & 0xF), 2);

        cputcxy(12, 18 - ((square2_signal[lasti] >> 7) & 0xF), 0);
        cputcxy(12, 18 - ((square2_signal[i] >> 7) & 0xF), 2);

        cputcxy(17, 18 - ((triangle_signal[lasti] >> 7) & 0xF), 0);
        cputcxy(17, 18 - ((triangle_signal[i] >> 7) & 0xF), 2);

        cputcxy(7, 19, ((square1_vol[i] >> 1) & 0xF) + '0');
        cputcxy(12, 19, ((square2_vol[i] >> 1) & 0xF) + '0');
        cputcxy(17, 19, ((triangle_vol[i] >> 1) & 0xF) + '0');
        cputcxy(22, 19, ((noise_vol[i] >> 1) & 0xF) + '0');

        lasti = i;
      }
      // Read in A, B, start, select
      *((char*)JOY1) = 1;
      k = 0;
      *((char*)JOY1) = 0;

      dummy = *((char*)JOY1);
      dummy = *((char*)JOY1);
      dummy = *((char*)JOY1);
      dummy = *((char*)JOY1);

      cputcxy(7 + 5 * channel_index, 20, 0);

      if (*((char*)JOY1) & 0x1) {
        apu_base_ptr[0x15] = apu_base_ptr[0x15] | (1 << channel_index);
      }
      if (*((char*)JOY1) & 0x1) {
        apu_base_ptr[0x15] = apu_base_ptr[0x15] & ~(1 << channel_index);
      }
      if (*((char*)JOY1) & 0x1) {
        channel_index = (channel_index + 3) % 4;
      }
      if (*((char*)JOY1) & 0x1) {
        channel_index = (channel_index + 1) % 4;
      }
      cputcxy(7 + 5 * channel_index, 20, '^');

      j = 0;
      ++i;
      if (i >= num_audio_signal) {
        i = 0;
      }
    }
  }
  return 0;
}
