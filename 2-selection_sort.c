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
	int idx;
	int tmp;

	for (i = 0; i < size - 1; i++)
	{
		int min;

		min = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < min)
			{
				min = array[j];
				idx = j;
			}
		}

		if (min != array[i])
		{
			tmp = array[i];
			array[i] = min;
			array[idx] = tmp;
			print_array(array, size);

		}
	}
}
