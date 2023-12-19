#include "sort.h"

/**
 * selection_sort - Entry point
 * @array: Array to be sorted
 * @size: Size of array
 * Return: Void
 */
void quick_sort(int *array, size_t size)
{
    int *p = array;
    int *tmp = NULL;
    size_t x, z;

    if (size < 2)
        return;

    tmp = &p[size - 1];
    

    /*
    for (x = size - 1; p[x]; x--)
    {
        if ()

        for (z = 0; z < size; z++)
        {
            if (p[x] < p[z])
            {
                swap(&p[x], &p[z]);
                print_array(p, size);
            }
        }
    }
    */
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
