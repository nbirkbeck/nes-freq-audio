.SUFFIXES:
.SUFFIXES: .c .s .oo .rom

LIBS=./cc65/lib/nes.lib
CC=./cc65/bin/cc65
AS=./cc65/bin/ca65
LD=./cc65/bin/ld65

all: californication.rom

%.s: %.c
	${CC} $< -t nes

%.oo: %.s
	${AS} $< -t nes -o $@

%.rom: %.oo audio_main.oo 
	${LD} -t nes audio_main.oo $< ${LIBS} -o $@

clean:
	rm -fv *.s *.o *.oo *.rom
