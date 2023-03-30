#include "main.h"

/**
 * _strcmp - main function
 * @s1: sentance 1
 * @s2:sentance 2
 * Return: int
 **/
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int dif;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	dif = s1[i] - s2[i];

	return (dif);
}
