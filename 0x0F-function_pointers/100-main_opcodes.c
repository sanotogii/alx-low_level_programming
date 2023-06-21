#include <stdio.h>
#include <stdlib.h>

/**
 * main - main
 * @argc: arg
 * @argv: arg
 * Return: int
 */

int main(int argc, char *argv[])
{
	int s, i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	s = atoi(argv[1]);

	if (s < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	i = 0;

	while (i < s)
	{
		if (i == (s - 1))
		{
			printf("02hhx\n", arr[i]);
			break;
		}

		printf("02hhx ", arr[i]);
		i++;
	}
	return (0);
}
