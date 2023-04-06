#include "main.h"

/**
 * _strlen_recursion - function
 * @s: str
 * Return: 1 or 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - function
 * @s: str
 * @n: arg
 * @k: arg
 * Return: 1 or 0
 */

int comparator(char *s, int n, int k)
{
	if (*(s + n) == *(s + k))
	{
		if (n == k || n == k + 1)
			return (1);
		return (0 + comparator(s, n + 1, k - 1));
	}
	return (0);
}

/**
 * is_palindrome - function
 * @s: str
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
