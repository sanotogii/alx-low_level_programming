#include <stdio.h>
#include <stdlib.h>
#include <main.h>


/**
 * create_array - function array
 * @size: size
 * @c: char
 * Return: arr
 */

char *create_array(unsigned int size, char c)
{
	char *arr = (char *)malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0 || arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
