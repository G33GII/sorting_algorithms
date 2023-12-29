#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

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

void swap_node_behind(listint_t **list, listint_t **tail, listint_t **current);
void swap_node_ahead(listint_t **list, listint_t **tail, listint_t **current);
size_t Lomuto_partition(size_t size, int array[], int left, int right);
void lomuto_recursion(int array[], size_t size, int left, int right);
listint_t *create_listint(const int *array, size_t size);
void print_array(const int *array, size_t size);
void selection_sort(int *array, size_t size);
void counting_sort(int *array, size_t size);
void counting_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void bubble_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void shell_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void print_list(const listint_t *list);
int get_max(int *array, int size);
void swap(int *a, int *b);

void merge_sort(int *array, size_t size);
void merge_sort_recursive(int *subarray, int *buffer, size_t left,
size_t right);
void merge_subarray(int *subarray, int *buffer, size_t left, size_t middle,
size_t right);

#endif /* End of Include Guard */
