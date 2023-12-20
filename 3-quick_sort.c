#include "sort.h"

/**
 * quick_sort - The main entry point for the Quick Sort algorithm.
 * @array: The array to be sorted
 * @size: The size of the array
 */
void quick_sort(int *array, size_t size)
{
	quick_sort_recursion(array, 0, size - 1);
}

/**
 * quick_sort_recursion - Helper function to perform
 * the quick sort algorithm recursively.
 * @array: The array to be sorted
 * @low: The starting index of the sub-array
 * @high: The ending index of the sub-array
 */
void quick_sort_recursion(int array[], size_t low, size_t high)
{
	if (low < high)
	{
		size_t pivot_idx = Lomuto_partition(array, low, high);

		if (pivot_idx > 0)
			quick_sort_recursion(array, low, pivot_idx - 1);
		quick_sort_recursion(array, pivot_idx + 1, high);
	}
}

/**
 * Lomuto_partition - Lomuto partition scheme.
 * @array: The array to be partitioned
 * @low: The starting index of the sub-array
 * @high: The ending index of the sub-array
 * Return: The partition index
 */
size_t Lomuto_partition(int array[], size_t low, size_t high)
{
	int pivot_value = array[high];
	size_t i = low, j;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot_value)
		{
			swap(&array[i], &array[j]);
			i++;
		}
	}
	swap(&array[i], &array[high]);
	print_array(array, high + 1);
	return (i);
}

/**
 * swap - Function to swap two elements.
 * @a: Pointer to the first element
 * @b: Pointer to the second element
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
