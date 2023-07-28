#include "main.h"

void display_elf(const char *filename)
{
	int i, file = open(filename, O_RDONLY);
	ssize_t br;
	Elf64_Ehdr elf_header;

	if (file == -1)
	{
		fprintf(stderr, "%s\n", "Error: Cannot open the file");
		exit(98);
	}
	br = read(file, &elf_header, sizeof(Elf64_Ehdr));
	if (br != sizeof(Elf64_Ehdr))
	{
		fprintf(stderr, "%s\n", "Error: Cannot read the ELF header");
			exit(98);
	}
	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
		elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
		elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
		elf_header.e_ident[EI_MAG3] != ELFMAG3)
	{
			fprintf(stderr, "%s\n", "Error: Not a valid ELF file");
			exit(98);
	}
	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", elf_header.e_ident[i]);
	printf("\n");
	printf("Class:   %s\n", elf_header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("Data:    %s\n", elf_header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little-endian" : "2's complement, big-endian");
	printf("Version: %d\n", elf_header.e_ident[EI_VERSION]);
	printf("OS/ABI:  %d\n", elf_header.e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", elf_header.e_ident[EI_ABIVERSION]);
	printf("Type:    %d\n", elf_header.e_type);
	printf("Entry point address: %lx\n", (unsigned long)elf_header.e_entry);
	close(file);
}

int main(int argc, char *argv[])
{

	if (argc != 2)
	{
		fprintf(stderr, "%s\n", "Usage: elf_header elf_filename");
		exit(98);
	}

	display_elf(argv[1]);

	return(0);
}
