#include "sort.h"

/**
 * bubble_sort - Entry point
 * @array:
 * @size:
 * Return: Always 0
 */
void bubble_sort(int *array, size_t size)
{
    int *p = array;
    int x, tmp, z;

    for (x = 0; x < size - 1; x++)
    {
        for (z = 0; z < size - x - 1; z++)
        {

            print_array(p, size);
            if (p[z] > p[z + 1])
            {
                tmp = p[z];
                p[z] = p[z + 1];
                p[z + 1] = tmp;
            }
        }
    }
}
