ARCH = arm-none-eabi
CFLAGS = -ffreestanding -nostdlib -Wall
LDFLAGS = -T linker.ld

all: start.elf

bootloader.o: src/bootloader/bootloader.asm
	$(ARCH)-as -o bootloader.o $<

kernel.o: src/kernel/main.c
	$(ARCH)-gcc $(CFLAGS) -c -o kernel.o $<

start.elf: bootloader.o kernel.o
	$(ARCH)-ld $(LDFLAGS) -o start.elf bootloader.o kernel.o

clean:
	rm -f *.o *.elf
