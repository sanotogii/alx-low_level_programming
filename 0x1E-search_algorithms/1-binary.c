#include <stdio.h>
#include <stdlib.h>

/**
 * binary_search - Performs a binary search on a sorted integer array
 * to find the index of a specific value.
 *
 * @array: Pointer to the sorted integer array.
 * @size: Size of the array.
 * @value: The integer value to be searched for.
 *
 * Return: Index of the value if found, otherwise -1.
 */


int binary_search(int *array, size_t size, int value)
{
	int l = 0, r = (int)size - 1, mid = 0, i;

	while (l <= r)
	{
		mid = (l + r) / 2;

		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			printf("%d", array[i]);
			if (i < r)
				printf(", ");
			else
				printf("\n");
		}

		if (value > array[mid])
			l = mid + 1;
		else if (value < array[mid])
			r = mid - 1;
		else
			return (mid);
	}

	return (-1);
}

