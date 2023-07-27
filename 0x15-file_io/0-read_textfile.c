#include "main.h"

/**
 * read_textfile - function that reads a text
 * @filename: file name
 * @letters: nbr of letters
 * Return: c
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	ssize_t c;

	if (filename)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer)
		return (0);

	c = read(file, buffer, letters);

	if (c == -1)
		return (0);

	write(1, buffer, c);
	free(buffer);
	close(file);
	return (c);
}
