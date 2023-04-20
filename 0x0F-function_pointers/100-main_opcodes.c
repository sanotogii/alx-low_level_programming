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
	char *ar;

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

	ar = (char *)main;

	i = 0;

	while (i < s)
	{
		if (i == (s - 1))
		{
			printf("%02hhx\n", ar[i]);
			break;
		}

		printf("%02hhx ", ar[i]);
		i++;
	}
	return (0);

}
