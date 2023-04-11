#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * _strdup -  function that creates an array of chars
 * @str: arg
 * Return: arr
 */

char *_strdup(char *str)
{
	char *arr;
	int len;
	int i;

	if (str == NULL)
		return (NULL);
	len = 0;

	while (str[len] != '\0')
		len++;
	arr = malloc(sizeof(char) * (len + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		arr[i] = str[i];

	return (arr);

}
