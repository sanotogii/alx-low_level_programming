#include "main.h"

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
	unsigned int i, j, len1;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	len1 = 0;

	while (s1[len1])
		len1++;

	str = (char *)malloc(sizeof(char) * (len1 + n + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		*(str + i) = s1[i];
	for (j = 0; j < n && s2[j]; j++, i++)
		*(str + i) = s2[j];
	str[i] = '\0';

	return (str);

}
