#include "sort.h"

/**
 * Partition - helper function, return the position of the partition
 * @A: the array
 * @start: the start index
 * @end: the end index
 * @size: size of the array
 * Return: the partition index
 */
int Partition(int *A, int start, int end, size_t size)
{
	int pivot = A[end];
	int partitionIndex = start;
	int i, tmp;

	for (i = start; i < end; i++)
	{
		if (A[i] <= pivot)
		{
			tmp = A[i];
			A[i] = A[partitionIndex];
			A[partitionIndex] = tmp;
			partitionIndex++;
		}
	}
	tmp = A[partitionIndex];
	A[partitionIndex] = A[end];
	A[end] = tmp;
	print_array(A, size);
	return (partitionIndex);
}
/**
 * QuickSort - the real quicksort function
 * @A: the array to be sorted
 * @start: the start index
 * @end: the end index
 * @size: size of the array
 */
void QuickSort(int *A, int start, int end, size_t size)
{
	int partitionIndex;

	if (start < end)
	{
		partitionIndex = Partition(A, start, end, size);
		QuickSort(A, start, partitionIndex - 1, size);
		QuickSort(A, partitionIndex + 1, end, size);
	}
}
/**
 * quick_sort - sort an array using the quick sort algorithm
 * @array: the array to be sorted
 * @size: the size of the  array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	QuickSort(array, 0, (int) size - 1, size);
}
