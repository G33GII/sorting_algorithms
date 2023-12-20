#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
void quick_sort(int *array, size_t size)
{
    quick_sort_recursion(array, 0, size - 1);
}


void quick_sort_recursion(int array[], size_t low, size_t high)
{
    if (low < high)
    {
        size_t pivot_idx = Lomuto_partition(array, low, high);
        if (pivot_idx > 0)
        {
            quick_sort_recursion(array, low, pivot_idx - 1);
        }
        quick_sort_recursion(array, pivot_idx + 1, high);
    }
}


size_t Lomuto_partition(int array[], size_t low, size_t high)
{
    int pivot_value = array[high];
    size_t i = low;

    for (size_t j = low; j < high; j++)
    {
        if (array[j] < pivot_value)
        {
            swap(&array[i], &array[j]);
            i++;
        }
    }
    swap(&array[i], &array[high]);
    return i;
}








void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
