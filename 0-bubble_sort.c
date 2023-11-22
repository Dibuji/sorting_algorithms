#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - Implementation of the Bubble Sort Algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 */

void bubble_sort(int *array, size_t size)
{
	int swapped;
	size_t i;

	if (size <= 1)
		return;

	do {
		swapped = 0;

		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(&array[i], &array[i + 1]);
				swapped = 1;

				print_array(array, size);
			}
		}

	} while (swapped);
}

/**
 * swap - Function to swap two indexes in an Array
 * @a: first index
 * @b: second index
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
