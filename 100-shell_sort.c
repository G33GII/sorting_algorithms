#include "sort.h"

/**
 * shell_sort - The main entry point for the Quick Sort algorithm.
 * @array: The array to be sorted
 * @size: The size of the array
 */
void shell_sort(int *array, size_t size)
{
	size_t gap = 1, i;

	while (gap < size / 3)
	{
		gap = 3 * gap + 1;
	}

	while (gap > 0)
	{
		for (i = gap; i < size; i++)
		{
			int temp = array[i];
			size_t j = i;

			while (j >= gap && array[j - gap] > temp)
			{
				array[j] = array[j - gap];
				j -= gap;
			}

			array[j] = temp;
		}

		gap /= 3;
		print_array(array, size);
	}
}
