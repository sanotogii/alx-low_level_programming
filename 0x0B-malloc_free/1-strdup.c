#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - count number of string
 * @s: arg
 * Return: len
 **/

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * _strdup -  function that creates an array of chars
 * @str: arg
 * Return: arr
 */

char *_strdup(char *str)
{
	char *arr = malloc(_strlen(str) + 1);
	int i;

	if (str == NULL)
		return (NULL);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= _strlen(str); i++)
		arr[i] = str[i];

	return (arr);

}
