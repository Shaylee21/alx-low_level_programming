#include <fcntl.h>
#include <string.h>
#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void print_error(char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

void print_magic(unsigned char *magic)
{
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++) {
		printf("%02x ", magic[i]);
	}
	printf("\n");
}

void print_class(unsigned char class)
{
	printf("  Class:
	switch (class) {
	case ELFCLASSNONE:
	printf("none\n");
	break;
	case ELFCLASS32:
	printf("ELF32\n");
	break;
	case ELFCLASS64:
	printf("ELF64\n");
	break;
	default:
	printf("<unknown: %d>\n", class);
	break;
	}
	}

void print_data(unsigned char data)
