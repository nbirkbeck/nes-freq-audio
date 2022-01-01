SUFFIXES=.c .s .o

LIBS=./cc65/lib/nes.lib
CC=./cc65/bin/cc65
AS=./cc65/bin/ca65
LD=./cc65/bin/ld65

audio_main.o: audio_main.s
	${AS} audio_main.s -t nes

audio_main.s: audio_main.c
	${CC} audio_main.c  -t nes

californication.o:
	${CC}  californication.c  -t nes && ${AS} californication.s -t nes 

californication.rom: audio_main.o californication.o
	${LD} -t nes audio_main.o californication.o ${LIBS} -o californication.rom

clean:
	rm -fv *.s *.o *.rom
