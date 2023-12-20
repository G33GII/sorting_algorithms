#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void swap(int *a, int *b);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void print_list(const listint_t *list);
void insertion_sort_list(listint_t **list);
void swap_values(listint_t *node1, listint_t *node2);
void quick_sort(int *array, size_t size);
void quick_sort_recursion(int array[], size_t low, size_t high);
size_t Lomuto_partition(int array[], size_t low, size_t high);

void counting_sort(int *array, size_t size);

void shell_sort(int *array, size_t size);


void heap_sort(int *array, size_t size);
void heapify(int *array, size_t size, size_t root);


#endif /* End of Include Guard */
