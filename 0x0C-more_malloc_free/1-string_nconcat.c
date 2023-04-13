#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - main
 * @s1: arg1
 * @s2: arg2
 * @n: arg3
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, l1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = 0;

	while (s1[l1])
		l1++;

	str = malloc(sizeof(char) * (l1 + n + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		str[i] = s1[i];
	for (j = 0; j < n && s2[j]; j++, i++)
		str[i] = s2[j];
	str[i] = '\0';

	return (str);

}