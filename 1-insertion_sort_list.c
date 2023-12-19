#include "sort.h"

/**
 * 
 * 
*
void insertion_sort_list(listint_t **list)
{
   listint_t *current, *next, *sorted;

   if (list == NULL || *list == NULL)
       return;

   sorted = NULL;     
   current = *list;   

    
   while (current != NULL)
   {
       next = current->next;

       
       if (current->prev != NULL)
           current->prev->next = current->next;
       else
           *list = current->next;

       if (current->next != NULL)
           current->next->prev = current->prev;

      
       if (sorted == NULL || sorted->n >= current->n)
       {
           current->prev = NULL;
           current->next = sorted;
           if (sorted != NULL)
               sorted->prev = current;
           sorted = current;
       }
       else
       {
           listint_t *tmp = sorted;
           while (tmp->next != NULL && tmp->next->n < current->n)
               tmp = tmp->next;
           
           current->prev = tmp;
           current->next = tmp->next;
           
           if (tmp->next != NULL)
               tmp->next->prev = current;
           
           tmp->next = current;
       }
       print_list(*list);
       

       current = next;
       
}
    *list = sorted;
}
**
 * i need to access the list with nodes. i need current and next node
 * so if the current node is bigger than the next node, we need to use
 * a for loop to swap current->n with next_node->n  
 * 
void insert_swap(listint_t *a, listint_t *b)
{
    int temp = a->n;
    a->n = b->n;
    b-> = temp;

    int temp = node1->n;
   node1->n = node2->n;
   node2->n = temp;
} */

void swap_values(listint_t *node1, listint_t *node2) 
{
   int temp = node1->n;
   node1->n = node2->n;
   node2->n = temp;
} 

void insertion_sort_list(listint_t **list)
{
    listint_t *current, *next, *prev;

    current = *list;
    

    if (list == NULL || *list == NULL)
        return;

    for (; current != NULL; current = current->next)
    {
        next = current->next;
        prev = current->prev;
        
        if (next != NULL && current->n >= next->n)
        {
            swap_values(current, next);
        }
        /*while loop*/
        if (prev != NULL && current->n <= prev->n)
        {
            swap_values(prev, current);
        }
    
    }

}

