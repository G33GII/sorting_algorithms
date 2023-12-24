#include "sort.h"

/**
 * quick_sort - The main entry point for the Quick Sort algorithm.
 * @array: The array to be sorted
 * @size: The size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_lomuto_recursion(array, size, 0, size - 1);
}

/**
 * lomuto_recursion - Helper function to perform
 * the quick sort algorithm recursively.
 * @array: The array to be sorted
 * @left: The starting index of the sub-array
 * @size: The size entire array
 * @right: The ending index of the sub-array
 */
void lomuto_recursion(int array[],  size_t size, int left, int right)
{
	int part;

	if (right - left > 0)
	{
		part = Lomuto_partition(size, array, left, right);
		lomuto_recursion(array, size, left, part - 1);
		lomuto_recursion(array, size, part + 1, right);
	}
}

/**
 * Lomuto_partition - Lomuto partition scheme.
 * @array: The array to be partitioned
 * @left: The starting index of the sub-array
 * @right: The ending index of the sub-array
 * @size: The size entire array
 * Return: The partition index
 */
size_t Lomuto_partition(size_t size, int array[], int left, int right)
{
	int *pivot, above, below;

	pivot = array + right;
	for (above = below = left; below < right; below++)
	{
		if (array[below] < *pivot)
		{
			if (above < below)
			{
				swap(array + below, array + above);
				print_array(array, size);
			}
			above++;
		}
	}

	if (array[above] > *pivot)
	{
		swap(array + above, pivot);
		print_array(array, size);
	}

	return (above);
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
