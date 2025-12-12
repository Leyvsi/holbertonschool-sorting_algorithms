#ifndef SORT_H
#define SORT_H

#include <stddef.h>
#include <stdio.h>

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

/* Sorting algorithms */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

/* Helpers for quick sort */
void quick_recursion(int *array, int low, int high, size_t size);
int lomuto_partition(int *array, int low, int high, size_t size);

#endif
