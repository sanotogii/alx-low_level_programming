#include "main.h"

/**
 * array_range - main
 * @min: arg1
 * @max: arg2
 * Return: int
 */

int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
		return (NULL);
	arr = (int *)malloc((max - min + 1) * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
		*(arr + i) = min + i;
	return (arr);

}
