#include <stdio.h>
#include "main.h"

/**
 * main - main function
 * @argc: arg counter
 * @argv: arg vector
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
