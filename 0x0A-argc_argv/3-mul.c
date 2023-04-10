#include "main.h"
#include <stdio.h>

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
int i;

if (argc == 3)
{

	i = my_atoi(argv[1]) * my_atoi(argv[2]);
	printf("%d\n", i);
}
else
{
	printf("Error\n");
	return (1);
}

return (0);

}
