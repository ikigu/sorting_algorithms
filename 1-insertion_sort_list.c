#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly-linked list of ints in ascending order
 * @list: list to sort
 *
 * Return: Nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *prev, *next;

	current = *list;

	if (!list || !(*list) || current->next == NULL)
		return;

	while (current->next)
	{
		next = current->next;
		prev = current->prev;
		if (current->n > next->n)
		{
			current->next = next->next;

			if (next->next)
				next->next->prev = current;

			next->prev = prev;
			current->prev = next;
			next->next = current;

			if (prev)
			{
				prev->next = next;
				current = prev;
			}
			else
			{
				*list = next;
				current = *list;
			}

			print_list(*list);
			continue;
		}
		current = current->next;
	}
}
