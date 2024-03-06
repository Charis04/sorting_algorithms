#include "sort.h"

/**
 * partition - splits the array into sub arrays
 *
 * @array: array to be split
 * @start: start of the array
 * @end: end of the array
 * @n: size of main array
 *
 * Return: location of split
 */

int partition(int *array, int start, int end, size_t n)
{
	int i, j = start, pivot = end;
	int temp;

	i = j;
	for (; j < end; j++)
	{
		if (array[j] <= array[pivot])
		{
			if (i < j)
			{
				temp = array[j];
				array[j] = array[i];
				array[i] = temp;
				print_array(array, n);
			}
			i++;
		}
	}
	if (array[i] > array[pivot])
	{
		temp = array[pivot];
		array[pivot] = array[i];
		array[i] = temp;
		print_array(array, n);
	}
	return (i);
}

/**
 * quick - performs quick sort using lumoto partition
 *
 * @array: array to be sorted
 * @start: start of the array
 * @end: end of the array
 * @n: size of main array
 */

void quick(int *array, int start, int end, size_t n)
{
	int loc;

	if (start < end && start >= 0 && end > 0)
	{
		loc = partition(array, start, end, n);
		quick(array, start, loc - 1, n);
		quick(array, loc + 1, end, n);
	}
	else
		return;
}

/**
 * quick_sort - sorts an array in ascending order using quick sort
 *
 * @array: array to be sorted
 * @size: size of the array
 */

void quick_sort(int *array, size_t size)
{
	size_t start = 0, end = size - 1;

	quick(array, start, end, size);
}
