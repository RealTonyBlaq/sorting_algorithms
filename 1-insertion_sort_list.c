#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list
 *						using the insertion sort algorithm
 * @list: The doubly linked list
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *node, *head;

	if (list == NULL || *list == NULL)
		return;
	head = *list;
	while (head)
	{
		if (head->next && (head->n > head->next->n))
		{
			current = head;
			head->next->prev = head->prev;
			if (head->prev)
				head->prev->next = head->next;
			else
				*list = head->next;
			node = head->next;
			current->prev = NULL;
			current->next = NULL;
			if (node->next)
			{
				current->next = node->next;
				node->next->prev = current;
				node->next = current;
				current->prev = node;
			}
			else
			{
				node->next = current;
				current->prev = node;
			}
			print_list(*list);
			head = *list;
			continue;
		}
		head = head->next;
	}
}
