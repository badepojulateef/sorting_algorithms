#include "sort.h"

void swap(int *a, int *b);

/**
 * bubble_sort - sort a given array
 *
 * @array: The array(unsorted) to be sorted
 * @size: The size of the array
 * Return: Nothing.
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(array + j, array + j + 1);
				print_array(array, size);
			}
		}
	}
}

/**
 * swap - swaps two members of an array
 *
 * @a: First parameter
 * @b: Second parameter
 * Return: Nothing.
 */
void swap(int *a, int *b)
{
	unsigned int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
