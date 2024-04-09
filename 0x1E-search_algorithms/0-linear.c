#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - Searches for a value in an array
 * using linear search algorithm
 * @array: Pointer to the first element of the array
 * @size: Size of the array
 * @value: Value to search for
 *
 * Return: The index of the first occurrence of @value
 * in @array, or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{	printf("value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
