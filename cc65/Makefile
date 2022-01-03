.SUFFIXES:
.SUFFIXES: .c .s .oo .rom

C65_SRC=${HOME}/src/cc65
LIBS=${C65_SRC}/lib/nes.lib
CC=${C65_SRC}/bin/cc65
AS=${C65_SRC}/bin/ca65
LD=${C65_SRC}/bin/ld65

all: californication.rom

%.s: %.c
	${CC} $< -t nes

%.oo: %.s
	${AS} -I${C65_SRC}/asminc $< -t nes -o $@

%.rom: %.oo audio_main.oo 
	${LD} --cfg-path ${C65_SRC}/cfg -t nes audio_main.oo $< ${LIBS} -o $@

clean:
	rm -fv *.s *.o *.oo *.rom
