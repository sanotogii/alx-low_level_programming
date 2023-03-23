#include "main.h"

/**
 * _isupper - main function
 * @c: the arg that represant the char
 * Return: 1 (success) , 0 fail
 **/

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else 
		return (0);
}
