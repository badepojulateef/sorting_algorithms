#include "sort.h"

/**
 * selection_sort - sorts an array
 *
 * @array: the array to be sorted
 * @size: the size of the array
 * Return: Nothing.
 */
void selection_sort(int *array, size_t size)
{
	size_t i;

	for (i = 0; i < size - 1; i++)
	{
		size_t n;
		size_t j;

		n = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[n])
				n = j;
		}

		if (n != i)
		{
			size_t tmp = array[i];

			array[i] = array[n];
			array[n] = tmp;
		}
	}
}
