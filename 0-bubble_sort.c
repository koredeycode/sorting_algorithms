#include "sort.h"
/**
 * bubble_sort - sort an array using the bubble sort algorithm
 * @array: the array to be sorted
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;
	bool swapped;

	if (array == NULL || size == 0)
		return;
	for (i = 0; i < size - 1; i++)
	{
		swapped = false;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
				swapped = true;
			}
		}
		if (!swapped)
		{
			break;
		}

	}
}
