#include "main.h"

/**
 * create_file - function that reads a text
 * @filename: file name
 * @text_content: nbr of letters
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int file, f;
	ssize_t c;
	size_t len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (-1);

	while (*text_content != '\0')
	{
		len++;
		text_content++;

	}
	len++;

	file = open(filename, O_TRUNC | O_WRONLY);

	if (file == -1)
	{
		f = creat(filename, 0600);
		if (f == -1)
			return (-1);

		return (-1);
	}

	c = write(file, text_content, len);

	if (c == -1)
		return (-1);

	close(file);
	return (1);

}
