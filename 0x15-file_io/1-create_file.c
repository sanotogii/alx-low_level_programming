#include "main.h"

/**
 * create_file - function that reads a text
 * @filename: file name
 * @text_content: nbr of letters
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t c;
	size_t len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (*text_content != '\0')
	{
		len++;
		text_content++;

	}

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (file == -1)
		return (-1);

	c = write(file, text_content, len);

	if (c == -1)
		return (-1);

	close(file);
	return (1);

}
