#include "sort.h"

/**
 * insertion_sort_list - Sort a doubly linked list of integers in
 * ascending order using Insertion sort.
 * @list: A double pointer to the head of the list.
 *
 * Description: Prints the list after each time two nodes are swapped.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *sorted, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	sorted = (*list)->next;

	while (sorted != NULL)
	{
		current = sorted;
		sorted = sorted->next;

		while (current->prev != NULL && current->n < current->prev->n)
		{
			tmp = current->prev;
			if (current->next != NULL)
				current->next->prev = tmp;
			tmp->next = current->next;
			current->prev = tmp->prev;
			current->next = tmp;
			if (tmp->prev != NULL)
				tmp->prev->next = current;
			else
				*list = current;
			tmp->prev = current;

			print_list(*list);
		}
	}
}
