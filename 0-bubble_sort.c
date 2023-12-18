#include "sort.h"

/**
 * bubble_sort - Entry point
 * @array: Array to be sorted
 * @size: Size of array
 * Return: Void
 */
void bubble_sort(int *array, size_t size)
{
	int *p = array;
	int x, tmp, z;

	for (x = 0; x < size - 1; x++)
	{
		for (z = 0; z < size - x - 1; z++)
		{
			if (p[z] > p[z + 1])
			{
				swap(&p[z], &p[z + 1]);
				print_array(p, size);
			}
		}
	}
}
