
extern int num_audio_signal;
extern int num_audio_wait;
extern unsigned short square1_signal[];
extern unsigned short square2_signal[];
extern unsigned short triangle_signal[];
extern char square1_vol[];
extern char square2_vol[];
extern char triangle_vol[];
extern char noise_vol[];

void waitvsync();
void cputcxy (unsigned char x, unsigned char y, char c);
void clrscr();

void update_square_wave_audio(char* ptr, int i, unsigned short* audio_signal, char* vol) {
  short sig = 0;
  if (i == 0 || audio_signal[i] != audio_signal[i - 1]) {
    ptr[0] = (0x10) | (vol[i]) | (((audio_signal[i] >> 11) & 0x3) << 6);

    sig = audio_signal[i] & 0x7FF;
    if (sig > 0x7FF) sig = 0x7FF;
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

int main() {
  int i = 0;
  int j = 0;
  int k = 0;
  char* ptr = 0x4000;
  int lasti = 0;
  clrscr();

  
  ptr[1 + 0x0] = 0x7F;  // Lower 7 bits
  ptr[1 + 0x4] = 0x7F;  // Lower 7 bits
  ptr[1 + 0x8] = 0x7F;
  
  // Enable all output channels 
  ptr[0x15] = 0x3 | 0x4 | 0x8;


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

      update_square_wave_audio(ptr, i, square1_signal, square1_vol);
      update_square_wave_audio(ptr + 0x4, i, square2_signal, square2_vol);
      update_square_wave_audio(ptr + 0x8, i, triangle_signal, triangle_vol);
      update_noise_wave_audio(ptr + 0xC, i, noise_vol);

      if (i % 2 == 0) {
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
      
      for (k = 16; k < 16; ++k) {
        cputcxy(5, 18 - k, square1_vol[i] >= k);
        cputcxy(10, 18 - k, square2_vol[i] >= k);
        cputcxy(15, 18 - k, triangle_vol[i] >= k);
        cputcxy(20, 18 - k, noise_vol[i] >= k);
      }
      lasti = i;
      }      
      /*
      if (0 && i <= 0x7FF) {

        // Duty type is upper 2 bits.
        
        // Bit 0x20 is to disable length decrement
        // Bit 4 is envelope decay disable
        // Bit 5 is envelope looping
          ptr[0] = 0xFF & ~0x20;
          ptr[1] = 0x7F;  // Lower 7 bits
          ptr[2] = i & 0xFF; // i & 0xFF;
          
          // Upper 5 bits are length; Lower 3 bits related to wavelength. 
          ptr[3] = ((i >> 8) & 0x7) | (0x1 << 3);
          ptr[0x15] = 0x1;
          }*/
      j = 0;

      ++i;
      if (i >= num_audio_signal) {
        i = 0;
      }

    }

  }
  return 0;
}
