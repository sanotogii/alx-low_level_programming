#include <stdio.h>
#include <stdlib.h>

/**
 * p_opcodes - main
 * @s: aa
 * @len: len
 * Return: void
 */

void p_opcodes(unsigned char *s, int len)
{
	int i = 0;

	while (i < len)
	{
		printf("%02x ", s[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - main
 * @argc: arg
 * @argv: arg
 * Return: int
 */

int main(int argc, char **argv)
{
		if (argc != 2)
		{
			printf("Error\n");
			return (1);
		}

		int len = atoi(argv[1]);

		if (len < 0)
		{
			printf("Error\n");
			return (2);
		}

		unsigned char *s = (unsigned char *)main;

		p_opcodes(s, len);

		return (0);

}
