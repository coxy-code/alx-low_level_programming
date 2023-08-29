#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/* Definition of the listint_t struct */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/* Function prototype for print_listint */
size_t print_listint(const listint_t *h);

/* Function prototypes */
size_t listint_len(const listint_t *h);

/* Function prototypes */
listint_t *add_nodeint(listint_t **head, const int n);

listint_t *add_nodeint_end(listint_t **head, const int n);

/* Function prototypes */
void free_listint(listint_t *head);size_t print_listint(const listint_t *h);
void free_listint2(listint_t **head);
/* Function prototypes */
int pop_listint(listint_t **head);

/* Function prototypes */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
#endif /* LISTS_H */

