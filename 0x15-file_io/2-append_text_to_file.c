#include "main.h"

/**
 * append_text_to_file - function
 * @filename: ..
 * @text_content: ..
 * Return: 1 or -1
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int file, s, len, i = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (!text_content)
		return (1);

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
		{
			len++;
			i++;
		}

		s = write(file, text_content, len);

		if (s == -1)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
