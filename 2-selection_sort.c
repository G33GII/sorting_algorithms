#include "sort.h"

/**
 * selection_sort - Entry point
 * @array: Array to be sorted
 * @size: Size of array
 * Return: Void
 */
void selection_sort(int *array, size_t size)
{
	int *p = array;
	int *tmp = NULL;
	size_t x, z;

	if (size < 2)
		return;

	for (x = 0; x < size; x++)
	{
		tmp = &p[x];
		for (z = x + 1; z < size; z++)
		{
			if (p[x] > p[z] && *tmp > p[z])
				tmp = &p[z];
		}
		if (*tmp != p[x])
		{
			swap(tmp, &p[x]);
			print_array(p, size);
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
