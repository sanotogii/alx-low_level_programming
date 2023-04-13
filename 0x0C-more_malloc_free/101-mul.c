#include <stdio.h>
#include <stdlib.h>

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}

void _puts(char *s)
{
	write(1, s, _strlen(s));
}

int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

int _atoi(char *s)
{
	int res = 0;
	int sign = 1;
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	for (; s[i]; i++)
		res = res * 10 + s[i] - '0';

	return (sign * res);
}

void mul(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int i, j, k;
	int *res;

	res = calloc(len1 + len2, sizeof(int));

	for (i = len1 - 1; i >= 0; i--)
		for (j = len2 - 1; j >= 0; j--)
			res[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');

	for (k = len1 + len2 - 1; k > 0; k--)
		if (res[k] >= 10)
		{
			res[k - 1] += res[k] / 10;
			res[k] %= 10;
		}

	for (k = (*res == 0); k < len1 + len2; k++)
		putchar(res[k] + '0');

	putchar('\n');

	free(res);
}
