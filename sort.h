#ifndef SORT_H
#define SORT_H

/*---LIBRARIES---*/

#include <stdlib.h>
#include <stdio.h>

/*---DATA STRUCTURES---*/

/**
 * struct listint_s - Doubly-linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/*---FUNCTION PROTOTYPES---*/

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void quicksort_recursion(int *array, int lo, int hi, size_t size);
int partition(int *array, int lo, int hi, size_t size);

#endif /*SORT_H*/
