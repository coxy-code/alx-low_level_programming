#include "lists.h"

/**
* free_listint_safe - Frees a listint_t list, handling potential loops
* @h: A pointer to a pointer to the head node of the linked list
* Return: The size of the list that was freed
*/
size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
listint_t *current = *h, *next;

while (current)
{
next = current->next;
free(current);
count++;
        
/* Detect if the next node has been visited before */
if ((size_t)next <= (size_t)current)
break;

current = next;
}

*h = NULL;
return (count);
}

