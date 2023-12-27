#include "sort.h"

/**
 * counting_sort - function to sort an array using counting sort algorithm
 * @array: array to be sorted
 * @size: size of array
 * Return: void
 */
void counting_sort(int *array, size_t size)
{
	int *counting_array, *sorted_array, max_value, index;

	/* Check if the array is valid and has more than one element */
	if (array == NULL || size < 2)
		return;
	/* Allocate memory for the sorted array */
	sorted_array = malloc(sizeof(int) * size);
	if (sorted_array == NULL)
		return;
	/* Find the maximum value in the array */
	max_value = get_max(array, size);
	/* Allocate memory for the counting array */
	counting_array = malloc(sizeof(int) * (max_value + 1));
	if (counting_array == NULL)
	{
		free(sorted_array);
		return;
	}
	/* Initialize the counting array with zeros */
	for (index = 0; index < (max_value + 1); index++)
		counting_array[index] = 0;
	/* Count the occurrences of each number in the array */
	for (index = 0; index < (int)size; index++)
		counting_array[array[index]] += 1;
	/* Calculate cumulative counts */
	for (index = 0; index < (max_value + 1); index++)
		counting_array[index] += counting_array[index - 1];
	/* Print the counting array */
	print_array(counting_array, max_value + 1);
	/* Build the sorted array using the counting array */
	for (index = 0; index < (int)size; index++)
	{
		sorted_array[counting_array[array[index]] - 1] = array[index];
		counting_array[array[index]] -= 1;
	}
	for (index = 0; index < (int)size; index++)
		array[index] = sorted_array[index];
	free(sorted_array);
	free(counting_array);
}

/**
 * get_max - Finds the maximum value in an array.
 * @array: An array of integers.
 * @size: The size of the array.
 * Return: The maximum integer in the array.
 */
int get_max(int *array, int size)
{
	int max_value, index;

	max_value = array[0];
	/* Iterate over the array, updating max_value with any value larger than it */
	for (index = 1; index < size; index++)
	{
		if (array[index] > max_value)
			max_value = array[index];
	}
	return (max_value);
}
