#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of integers.
 * in ascending order using the Insertion sort algorithm.
 * @list: The list of integers.
 * Return: Nothing.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temper;
	listint_t *node_to_swap;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	node_to_swap = (*list)->next;
	while (node_to_swap)
	{
		temper = node_to_swap;
		while (temper->prev && temper->n < temper->prev->n)
		{
			temper->prev->next = temper->next;
			if (temper->next != NULL)
				temper->next->prev = temper->prev;
			temper->next = temper->prev;
			temper->prev = temper->prev->prev;
			temper->next->prev = temper;
			if (temper->prev == NULL)
				*list = temper;
			else
				temper->prev->next = temper;
			print_list(*list);
		}
		node_to_swap = node_to_swap->next;
	}
}
