#include "sort.h"

/**
 * bubble_sort - sorts and prints an array.
 * @array: array to be sorted.
 * @size: size of array.
 **/

void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i;
	size_t j;
	bool swapped;

	if (array == NULL || size == 0)
		return;
	for (i = 0; i < size; i++)
	{
		swapped = false;
		for (j = 0; j < size - i; j++)
		{
			if (array[j] < array[j - 1])
			{
				temp = array[j];
				array[j] = array[j - 1];
				array[j - 1] = temp;
				print_array(array, size);
				swapped = true;
			}
		}
		if (!swapped)
			break;
	}
}
