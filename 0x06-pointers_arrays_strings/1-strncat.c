#include "main.h"

/**
 * _strncat - main function
 * @dest: arg1
 * @src: arg2
 * @n: arg3
 * Return: dest
 **/

char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}

	int i = 0;

	while (i < n && *src != '\0')
	{
		*p++ = *src++;
		i++;
	}

	*p = '\0';
	return (dest);

}
