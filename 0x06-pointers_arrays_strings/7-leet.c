#include "main.h"
#include <stdio.h>

/**
 * leet - main function
 * @s: arg
 * Return: *s
 */

char leet(char *a)
{
	int i;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[i] == data1[j])
			{
				a[i] = datarot[j];
				break;
			}
		}
	}
	return (a);
}
