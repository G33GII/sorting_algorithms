#include "sort.h"
<<<<<<< HEAD
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
=======

/**
 * bubble_sort - Entry point
 * @array:
 * @size:
 * Return: Always 0
 */
void bubble_sort(int *array, size_t size)
{
    int *_p = array, *_s = NULL;
    int x, tmp;

    for (x = 0; x < size; x++)
    {
        for (x = 0; x < size; x++)
        {
            printf("%i\n", _p[x]);
            if (_p[x + 1] != NULL)
            {
                if (_p[x] > _p[x + 1])
                {
                    tmp = _p[x];
                    _p[x] = _p[x + 1];
                    _p[x + 1] = tmp;
                }
            }
        }
        x = 0;
    }
}
>>>>>>> d648728b6e98d589d35c289684197f105ed29504
