#include "main.h"
/**
 * rev_string - reverse function
 * @s: arg
 * Return: void
 **/

void rev_string(char *s)
{
	int len = _strlen(s);
	int mid = len / 2;
	char tmp;

	for (int i = 0; i < mid ; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}

}
