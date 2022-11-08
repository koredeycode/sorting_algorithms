#include "sort.h"

/**
 * insertion_sort_list - sorts array ascendingly.
 * @array: array to be sorted.
 * @size: size of the array to be sorted.
 **/

void selection_sort(int *array, size_t size)
{
	int temp;
	size_t i;
	size_t j;
	int swapped;

	if (array == NULL || size == 0)
		return;

	for (i = 0; i < size; i++)
	{
		size_t min = i;

		swapped = 0;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min != i)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
			swapped = 1;
		}
		if (!swapped)
			break;
	}
}
