#include <stdio.h>
#include <string.h>
#include "sort.h"

/**
 * swap - swaps the address of the pointer to an int
 *
 * @a: first int to swap
 * @b: second int to swap
 *
 * Return: Nothing
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - A function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 *
 * @array: The array of integers to sort
 * @size: size of the @array
 *
 * Return: Sorted array of integers
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, k;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);

				for (k = 0; k < size; k++)
					printf("%d ", array[k]);

				printf("\n");
			}
		}
	}
}
