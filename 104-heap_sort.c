#include "sort.h"

/**
 * swap - Swap two integers in memory.
 *
 * This function takes two pointers to integers
 * and swaps the integers they point to.
 *
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * heapify - Turn an array into a max heap.
 *
 * This function takes an array and its size and turns it into a max heap by
 * moving the largest element to the root.
 *
 * @array: The array to turn into a max heap.
 * @size: The size of the array.
 * @root:The index of the current root element.
 */
void heapify(int *array, size_t size, size_t root)
{
	size_t largest = root;
	size_t left = 2 * root + 1;
	size_t right = 2 * root + 2;

	if (left < size && array[left] > array[largest])
	{
		largest = left;
	}

	if (right < size && array[right] > array[largest])
	{
		largest = right;
	}

	if (largest != root)
	{
		swap(&array[root], &array[largest]);
		heapify(array, size, largest);
	}
}

/**
 * heap_sort - Sort an array in ascending order using the heap sort algorithm.
 *
 * This function takes an array and its size and sorts it in ascending order
 * using the heap sort algorithm. It first turns the array into a max heap and
 * then repeatedly removes the largest element and puts it at the end of the
 * array.
 *
 * @array: The array to sort.
 * @size: The size of the array.
 */
void heap_sort(int *array, size_t size)
{
	int i;

	for (i = size / 2 - 1; i >= 0; i--)
	{
		heapify(array, size, i);
		print_array(array, size);
	}

	for (i = size - 1; i >= 0; i--)
	{
		swap(&array[0], &array[i]);
		print_array(array, size);
		heapify(array, i, 0);
		print_array(array, size);
	}
}
