#include "sort.h"
/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * @array: array of elemnets
 * @size: size of array
 * Return: void
*/

void bubble_sort(int *array, size_t size)
{
    size_t a;
    size_t b;
    size_t swapped_element;

    for (a = 0; a < size - 1; a ++)
    {
        swapped_element = 0;

        for (b = 0; b < size - a - 1; b++)
        {
            if (array[b] > array[b + 1])
            {
                swap(&array[b], &array[b + 1]);
                swapped_element = 1;
            }
        }
        if (swapped_element == 0)
        {
            break;
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