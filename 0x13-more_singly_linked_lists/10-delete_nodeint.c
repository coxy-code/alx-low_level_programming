#include "lists.h"
#include <stdlib.h>

/**
* delete_nodeint_at_index - Deletes the node at given index of listint_t list.
* @head: Double pointer to the head of the list.
* @index: Index of the node to be deleted.
*
* Return: 1 if succeeded, -1 if it failed.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *temp;
unsigned int i;

if (head == NULL || *head == NULL)
return (-1);

if (index == 0)
{
temp = *head;
*head = (*head)->next;
free(temp);
return (1);
}

current = *head;
for (i = 0; current != NULL && i < index - 1; i++)
current = current->next;

if (current == NULL || current->next == NULL)
return (-1);

temp = current->next;
current->next = temp->next;
free(temp);

return (1);
}

