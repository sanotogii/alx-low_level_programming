#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - main function
 * @argc: arg counter
 * @argv: arg vector
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int cent, change, i;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);
	change = 0;

	if (cent < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; j < 5 && cent >= 0; i++)
	{
		while (cent >= coins[i])
		{
			change++;
			cent -= coins[i];
		}
	}
	printf("%d\n", change);
	return (0);
}
