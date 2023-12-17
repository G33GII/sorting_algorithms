#include "sort.h"

/**
 * bubble_sort - Entry point
 * @array:
 * @size:
 * Return: Always 0
 */
void bubble_sort(int *array, size_t size)
{
    int *_p = array; /*_s = NULL;*/
    size_t x, y, tmp;

    for (x = 0; x < size; x++)
    {
        for (y = 0; y < size; y++)
        {
            /*printf("%i", _p[y]);*/
            if (_p[x + 1] != 0)
            {
                if (_p[y] > _p[y + 1])
                {
                    tmp = _p[y];
                    _p[y] = _p[y + 1];
                    _p[y + 1] = tmp;
                }
            }
        }
        print_array(array, size);
    }
}
