#include "sort.h"

/**
 * insertion_sort_list -
 * Return:
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *current, *tmp;

    if (list == NULL || *list == NULL)
        return;

    current = (*list)->next;

    while (current != NULL)
    {
        tmp = current;
        current = current->next;
        while (tmp->prev != NULL && tmp->prev->n > tmp->n)
        {
            // Swap nodes
            tmp->prev->next = tmp->next;
            if (tmp->next != NULL)
                tmp->next->prev = tmp->prev;
            tmp->next = tmp->prev;
            tmp->prev = tmp->prev->prev;
            tmp->next->prev = tmp;
            if (tmp->prev != NULL)
                tmp->prev->next = tmp;
            else
                *list = tmp;
            print_list(*list);
        }
    }
}
