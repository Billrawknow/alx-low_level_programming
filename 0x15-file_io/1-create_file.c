#include "main.h"
/**
 * create_file - function that creates file
 * @filename: the name of the file that is being created
 * @text_content: - string to write the file
 * Return: 1 for success,-1 for failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t abc = 0, a = 0, b = 0;

	if (filename == NULL)
		return (-1);
	if (!text_content)
		text_content = "";
	abc = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (abc < 0)
		return (-1);
	while (text_content[b])
		b++;
	a = write(abc, text_content, b);
	if (a < 0)
		return (-1);
	close(abc);
	return (1);
}
