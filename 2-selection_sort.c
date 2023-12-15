#include <stdio.h>
#include "sort.h"

/**
 * selection_sort - sorts an array of integers
 * in ascending order using the selection sort
 * algorithm.
 *
 * @array: The array to sort
 * @size: Size of the array to sort
 *
 * Return: Nothing!
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx, max;
	int temp;

	if (!array || size < 2)
		return;

	max = size - 1;
	for (i = 0; i < max; i++)
	{
		min_idx = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}

		if (min_idx != i)
		{
			temp = array[i];
			array[i] = array[min_idx];
			array[min_idx] = temp;
			print_array(array, size);
		}
	}
}
