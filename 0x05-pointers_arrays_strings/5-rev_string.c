#include "main.h"
/**
 * rev_string - reverse function
 * @s: arg
 * Return: void
 **/

void rev_string(char *s)
{
	int j = 0;
	char rev = s[0];

	while (s[j] != '\0')
		j++;

	for (int i = 0; i < j ; i++)
	{
		j--;
		rev = s[i];
		s[i] = s[j];
		s[j] = rev;
	}

}
