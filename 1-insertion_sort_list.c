#include "sort.h"
/**
 * 
 * 
*/
void insertion_sort_list(listint_t **list)
{
    listint_t *current = (*list)->next;
    listint_t *next_node = NULL;
   

    for (current = (*list)->next; current != NULL; current = next_node) 
    {
        next_node = current->next;
        
        while (current->prev != NULL && next_node != NULL && next_node->n < current->n)
        {
            if (current->next != NULL)
            {
                current->next->prev = current->prev;
            }
            current->next = current->prev;
            current->prev = current->prev->prev;
            current->next->prev = current;
        
            if (current->prev != NULL)
            {
                current->prev->next = current;
            }
            else
            {
                *list = current;
            }
        }
    }
}  
/**
 * i need to access the list with nodes. i need current and next node
 * so if the current node is bigger than the next node, we need to use
 * a for loop to swap current->n with next_node->n  
 */  
