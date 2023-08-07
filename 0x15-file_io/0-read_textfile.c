#include "main.h"
/**
 * read_textfile - reads a text file nd prints it to the POSIX stdout
 * @filename: it is the name of the file that is being read
 * @letters: number of letters thst should be read and printed
 * Return: the actual number of letters read and printed, or 0 if fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a, b;
	int abc;
	char *buffer;

	if (filename == NULL)
		return (0);
	abc = open(filename, O_RDONLY);
	if (abc == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	a = read(abc, buffer, letters);
	b = write(STDOUT_FILENO, buffer, a);
		free(buffer);
		close(abc);
		return (b);
}
