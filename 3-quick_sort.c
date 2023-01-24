#include "sort.h"

void lomuto_sort(int *array, size_t size, int left, int right);
int partition(int arr[], size_t size, int left, int right);
void swap(int *a, int *b);

/**
 * quick_sort - sort an array
 *
 * @array: the array to be sorted
 * @size: the size of the array to be sorted
 * Return: Nothing.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	lomuto_sort(array, size, 0, size - 1);
}

/**
 * lomuto_sort - sort an array
 *
 * @array: array
 * @size: the size of the array
 * @left: the array to be sorted
 * @right: the size of the array to be sorted
 * Return: Nothing.
 */
void lomuto_sort(int *array, size_t size, int left, int right)
{
	if (left < right)
	{
		int part = partition(array, size, left, right);

		lomuto_sort(array, size, left, part - 1);
		lomuto_sort(array, size, part + 1, right);
	}
}

/**
 * partition - splits an array in to two
 *
 * @arr: the array to be sorted
 * @size: the size of the array
 * @left: the left sub-array
 * @right: the right sub-array
 * Return: integer
 */
int partition(int arr[], size_t size, int left, int right)
{
	int pivot = arr[right];
	int i = (left - 1);
	int j;

	for (j = left; j <= (right - 1); j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
			print_array(arr, size);
		}
	}
	swap(&arr[i + 1], &arr[right]);
	print_array(arr, size);
	return (i + 1);
}

/**
 * swap - swaps two ints
 *
 * @a: int
 * @b: int
 * Return: Nothing.
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
