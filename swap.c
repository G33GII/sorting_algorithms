#include "sort.h"
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
