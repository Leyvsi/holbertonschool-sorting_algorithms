#ifndef SORT_H
#define SORT_H

#include <stddef.h>

/* Print functions */
void print_array(const int *array, size_t size);
void print_list(const struct listint_s *list);

/* Doubly linked list structure */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

#endif
