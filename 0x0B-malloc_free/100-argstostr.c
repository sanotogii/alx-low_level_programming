#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * argstostr - main
 * @ac: arg number
 * @av: arr
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	int total_len, i, pos;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	total_len = 0;

	for (i = 0; i < ac; i++)
		total_len += strlen(av[i]) + 1;

	str = malloc(total_len + 1);

	if (str == NULL)
		return (NULL);

	pos = 0;

	for (i = 0; i < ac; i++)
	{
		strcpy(str + pos, av[i]);
		pos += strlen(av[i]);
		str[pos++] = '\n';
	}
	str[pos] = '\0';
	return (str);

}
