#include "main.h"

/**
 * _strlen - count number of string
 * @s: arg
 * Return: len
 **/

int _strlen(char *s)
{
	int len = 0;

	while(*s != '\0')
	{
		len++;
		s++;
	}
	return (len) ;	
}
