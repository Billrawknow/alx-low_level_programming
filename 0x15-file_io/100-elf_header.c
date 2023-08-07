#include "main.h"

/**
 * error_exit - Display an error message and exit.
 * @msg: The error message to display.
 */
void error_exit(const char *msg)
{
    dprintf(STDERR_FILENO, "%s\n", msg);
    exit(98);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to the arguments.
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
    int fd;
    Elf64_Ehdr elf_header;

    if (argc != 2)
        error_exit("Usage: elf_header elf_filename");

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
        error_exit("Error: Cannot open file");

    if (read(fd, &elf_header, sizeof(elf_header)) != sizeof(elf_header))
        error_exit("Error: Cannot read ELF header");

    if (elf_header.e_ident[0] != 0x7f || strncmp((const char *)&elf_header.e_ident[1], "ELF", 3) != 0)
        error_exit("Error: Not an ELF file");

    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++)
        printf("%02x ", elf_header.e_ident[i]);
    printf("\n");
    printf("  Class:                             ");
    if (elf_header.e_ident[EI_CLASS] == ELFCLASS32)
        printf("ELF32\n");
    else if (elf_header.e_ident[EI_CLASS] == ELFCLASS64)
        printf("ELF64\n");
    printf("  Data:                              ");
    if (elf_header.e_ident[EI_DATA] == ELFDATA2LSB)
        printf("2's complement, little endian\n");
    else if (elf_header.e_ident[EI_DATA] == ELFDATA2MSB)
        printf("2's complement, big endian\n");
    printf("  Version:                           %d (current)\n", elf_header.e_version);
    printf("  OS/ABI:                            ");
    switch (elf_header.e_ident[EI_OSABI])
    {
        case ELFOSABI_SYSV:     printf("UNIX - System V\n"); break;
        case ELFOSABI_NETBSD:   printf("UNIX - NetBSD\n"); break;
        case ELFOSABI_SOLARIS:  printf("UNIX - Solaris\n"); break;
        default:                printf("<unknown: %d>\n", elf_header.e_ident[EI_OSABI]); break;
    }
    printf("  ABI Version:                       %d\n", elf_header.e_ident[EI_ABIVERSION]);
    printf("  Type:                              ");
    switch (elf_header.e_type)
    {
        case ET_NONE:       printf("NONE (No file type)\n"); break;
        case ET_REL:        printf("REL (Relocatable file)\n"); break;
        case ET_EXEC:       printf("EXEC (Executable file)\n"); break;
        case ET_DYN:        printf("DYN (Shared object file)\n"); break;
        case ET_CORE:       printf("CORE (Core file)\n"); break;
        default:            printf("<unknown: %d>\n", elf_header.e_type); break;
    }
    printf("  Entry point address:               0x%lx\n", (unsigned long)elf_header.e_entry);

    close(fd);
    return (0);
}
