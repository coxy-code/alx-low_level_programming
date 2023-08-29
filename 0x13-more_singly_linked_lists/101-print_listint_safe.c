#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_listint_safe - Prints a listint_t linked list.
* @head: Pointer to the beginning of the list.
* Return: The number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *slow, *fast;

slow = head;
fast = head;

while (fast != NULL && fast->next != NULL)
{
printf("[%p] %d\n", (void *)slow, slow->n);
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
{
count++;
printf("[%p] %d\n", (void *)slow, slow->n);
break;
}
}

while (slow != fast)
{
printf("[%p] %d\n", (void *)slow, slow->n);
slow = slow->next;
count++;
}

return count;
}

