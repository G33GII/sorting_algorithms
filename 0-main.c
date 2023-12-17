<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
=======
>>>>>>> d648728b6e98d589d35c289684197f105ed29504
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    bubble_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
<<<<<<< HEAD
}
=======
}
>>>>>>> d648728b6e98d589d35c289684197f105ed29504
