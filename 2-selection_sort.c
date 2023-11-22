#include "sort.h"

/**
 * selection_sort - Implementation of Selection sort Algorithm
 * to sort an array of integers in ascending order.
 * @array: Array to be sorted
 * @size: The size of the array
 */

void selection_sort(int *array, size_t size)
{

	size_t i, j, min;

	if (size < 2)
	{
		return;
	}

	for (i = 0; i < size - 1; i++)
	{

		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}

		if (min != i)
		{
			swap(&array[i], &array[min]);
			print_array(array, size);
		}

	}
}

/**
 * swap - function to swap between two indexes of an array
 * @a: first index for swapping
 * @b: second index for swapping
 *
 */

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
