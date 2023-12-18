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
	size_t x, z;

	if (size == 1)
	{
		print_array(p, size);
		return;
	}

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

/**
 * swap - function to swap
 * @a: element to be swapped
 * @b: element to be swapped
 * Return: void
 */
void swap(int *a, int *b)
{
	size_t temp_Var = *a;
	*a = *b;
	*b = temp_Var;
}
