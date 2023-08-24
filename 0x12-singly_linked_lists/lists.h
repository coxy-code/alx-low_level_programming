#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/* Function to print all elements of a linked list */
size_t print_list(const list_t *h);

/* Function to get the number of elements in a linked list */
size_t list_len(const list_t *h);

/* Function to add a new node at the beginning of the list */
list_t *add_node(list_t **head, const char *str);

/* Function to add a new node at the end of the list */
list_t *add_node_end(list_t **head, const char *str);

/* Function to free a linked list */
void free_list(list_t *head);

#endif /* LISTS_H */

