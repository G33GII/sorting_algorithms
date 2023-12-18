#include "sort.h"

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
