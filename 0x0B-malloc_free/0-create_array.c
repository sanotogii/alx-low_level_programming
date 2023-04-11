#include <stdio.h>
#include<stdlib.h>
#include "main.h"

/*
 * create_array - main function
 * @size: size of arr
 * @c: char
 * Return: char
 **/

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
