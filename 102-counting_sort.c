#include "sort.h"
/**
 * counting_sort - function to sort algorithim with counting sort
 * @array: array to be sorted
 * @size: size of array
 * Return: void
 */
void counting_sort(int *array, size_t size)
{
	int max = array[0];
	size_t a, e, f, c;
	int *count, *sorted;
	int b, d;

	for (a = 1; a < size; a++)
	{
		if (array[a] > max)
		{
			max = array[a];
		}
	}

	count = (int *)malloc((max + 1) * sizeof(int));
	for (b = 0; b <= max; b++) {
		count[b] = 0;
	}

	for (c = 0; c < size; c++) {
		count[array[c]]++;
	}

	print_array(count, max + 1);

	for (d = 1; d <= max; d++) {
		count[d] += count[d - 1];
	}

	sorted = (int *)malloc(size * sizeof(int));
	for (e = size - 1; e < size; e--) {
		sorted[count[array[e]] - 1] = array[e];
		count[array[e]]--;
	}

	for (f = 0; f < size; f++) {
		array[f] = sorted[f];
	}

	free(count);
	free(sorted);
}
