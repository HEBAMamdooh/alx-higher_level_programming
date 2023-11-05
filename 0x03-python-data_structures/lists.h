#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <stdio.h>

/**
 * struct list_int_s- singly linked list
 *
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *              for project
 */

typedef struct list_int_s
{
    int n;
    struct list_int_s *next;
} list_int_t;

size_t print_list_int(const list_int_t *h);
list_int_t *add_node_int_end(list_int_t **head, const int n);
void free_list_int(list_int_t *head);

int is_palindrome(list_int_t **head);

#endif /* LISTS_H */