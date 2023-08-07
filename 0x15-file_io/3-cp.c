#include "main.h"
/**
 * err_file  - copy contents of the file
 * @file_from: file to copy contents from
 * @file_to: file to copy contents  to
 * @argv: argument vector
 * Return: nothing to return
 */
void err_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - copies contents of  file to another file
 * @argv: argument vector
 * @argc: argument count
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, i;
	ssize_t a, b;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	err_file(file_from, file_to, argv);

	a  = 1024;
	while (a == 1024)
	{
		a = read(file_from, buffer, 1024);
		if (a == -1)
			err_file(-1, 0, argv);
		b = write(file_to, buffer, a);
		if (b == -1)
			err_file(0, -1, argv);
	}
	i = close(file_from);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
