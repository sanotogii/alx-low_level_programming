#include "main.h"
/**
 * *_strncpy - main function
 * @dest: arg1
 * @src: arg2
 * @n: counter
 * Return: dest
 **/

char *_strncpy(char *dest, char *src, int n)
{

	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i++] = '\0';
	}

	return (dest);
}
