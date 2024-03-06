#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swap, tmp;

	for (i = size; i > 1; i--)
	{
		swap = 0;
		for (j = 0; j < i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				swap = 1;
				print_array(array, size);
			}
		}
		if (swap == 0)
			break;
	}
}
