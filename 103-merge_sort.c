#include "sort.h"

/**
 * merge_sort - Sorts an array using merge sort algorithm.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void merge_sort(int *array, size_t size)
{
	int *buffer;

	if (array == NULL || size < 2)
		return;

	buffer = malloc(sizeof(int) * size);
	if (buffer == NULL)
		return;

	merge_sort_recursive(array, buffer, 0, size);

	free(buffer);
}


/**
 * merge_sort_recursive - Recursive function for merge sort.
 * @subarray: The subarray to be sorted.
 * @buffer: The temporary buffer used in merging.
 * @left: The left index of the subarray.
 * @right: The right index of the subarray.
 */
void merge_sort_recursive(int *subarray, int *buffer, size_t left,
size_t right)
{
	size_t middle;

	if (right - left > 1)
	{
		middle = left + (right - left) / 2;
		merge_sort_recursive(subarray, buffer, left, middle);
		merge_sort_recursive(subarray, buffer, middle, right);
		merge_subarray(subarray, buffer, left, middle, right);
	}
}

/**
 * merge_subarray - Merges two subarrays into a sorted subarray.
 * @subarray: The original array containing the subarrays.
 * @buffer: The temporary buffer for merging.
 * @left: The left index of the subarray.
 * @middle: The middle index of the subarray.
 * @right: The right index of the subarray.
 */
void merge_subarray(int *subarray, int *buffer, size_t left, size_t middle,
size_t right)
{
	size_t i, j, k = 0;

	printf("Merging...\n[left]: ");
	print_array(subarray + left, middle - left);

	printf("[right]: ");
	print_array(subarray + middle, right - middle);

	for (i = left, j = middle; i < middle && j < right; k++)
		buffer[k] = (subarray[i] < subarray[j]) ? subarray[i++] : subarray[j++];
	for (; i < middle; i++)
		buffer[k++] = subarray[i];
	for (; j < right; j++)
		buffer[k++] = subarray[j];
	for (i = left, k = 0; i < right; i++)
		subarray[i] = buffer[k++];

	printf("[Done]: ");
	print_array(subarray + left, right - left);
}


