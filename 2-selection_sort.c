#include "sort.h"

/**
 * selection_sort - sorts an array in asc order using selection
 * sort algorithm
 * @array: array of int to be sorted
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min, temp;

	if (size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (array[min] < array[i])
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
