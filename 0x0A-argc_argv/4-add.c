#include <stdio.h>
#include "main.h"

/**
 * _isdigit - the function that checkes for digit
 * @c: the arg
 * Return: 1 if (success) 0 if fail
 **/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/**
 * my_atoi - convert str to int
 * @str: string
 * Return: int
 **/

int my_atoi(const char *str)
{
	int num = 0;
	int sign = 1;

	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
			num = num * 10 + (*str - '0');
		else
			break;
		str++;
	}

	return (sign * num);
}

/**
 * main - main function
 * @argc: arg counter
 * @argv: arg vector
 * Return: 1 fail 0 succ
 **/


int main(int argc, char *argv[])
{
	int s = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *arv = argv[i];
		int j;

		for (j = 0; arv[j] != '\0'; j++)
		{
			if (!_isdigit(arv[j]))
			{
			printf("Error\n");
			return (1);
			}
		}
		s = s + my_atoi(arv);
	}
	printf("%d\n", s);
	return (0);
}
