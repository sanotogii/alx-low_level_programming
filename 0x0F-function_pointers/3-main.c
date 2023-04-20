#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - main
 * @argv: arg vector
 * @argc: arg counter
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int (*oprt)(int, int);

	oprt = get_op_func(argv[2]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
	return (0);


}
