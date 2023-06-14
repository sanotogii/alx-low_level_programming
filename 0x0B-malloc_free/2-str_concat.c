#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - main function
 * @s1: str1
 * @s2:str2
 * Return: arr
 */

char *str_concat(char *s1, char *s2)
{
	int i, len1, len2;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	
	len1 = 0;
	
	while (s1[len1] != '\0')
		len1++;
	
	len2 = 0;

	while (s2[len2] != '\0')
		len2++;
	arr = malloc(len1 + len2 + 1);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		arr[i] = s1[i];
	
	for (i = 0; i < len2; i++)
		arr[i + len1] = s2[i];
	
	arr[len1 + len2] = '\0';

	return (arr);
}
