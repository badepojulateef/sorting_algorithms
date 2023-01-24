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
	size_t j;
	int tmp;

	for (i = 0; i < size - 1; i++)
	{
		size_t min;

		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min] > array[j])
			{
				min = j;
			}
		}

		if (min != i)
		{
			tmp = array[min];
			array[min] = array[i];
			array[i] = tmp;
			print_array(array, size);

		}
	}
}
