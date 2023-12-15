#include <stdio.h>
#include "sort.h"

/**
  * bubble_sort - Sorts an array of integers in ascending
  * order using the Bubble sort algorithm.
  *
  * @array: The array of integers to sort
  * @size: The size of the array of integers
  *
  * Return: Nothing!
  */
void bubble_sort(int *array, size_t size)
{
	int i = 0, temp = 0, max = 0, swapped;

	if (!array || size < 2)
		return;

	max = size - 1;

	for (; i < max; ++i)
	{
		if (array[i] > array[i + 1])
		{
			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
			swapped = 1;
			print_array(array, size);
		}

		if (swapped == 1 && i == max - 1)
			i = -1, swapped = 0, --max;
	}
}
