#include "sort.h"

/**
 * cocktail_sort_list - Sorts a doubly linked list using
 *						the cocktail shaker sort algorithm
 * @list: The doubly linked list
 * Return: Nothing
*/
void cocktail_sort_list(listint_t **list)
{
	listint_t *head, *tail;

	if (list == NULL || *list == NULL)
		return;
	head = *list;
	while (head)
	{
		if (head->next && (head->n > head->next->n))
			head = head_swap(list, head);
		if (head->next == NULL)
		{
			if (check_sorted(list) == 1)
				return;
			tail = head;
			while (tail)
			{
				if (tail->prev && tail->n < tail->prev->n)
				{
					tail = tail_swap(list, tail);
					continue;
				}
				tail = tail->prev;
			}
			head = *list;
			continue;
		}
		head = head->next;
	}
}

/**
 * check_sorted - Checks if a doubly list is sorted
 * @list: The doubly linked list
 *
 * Return: 1 if true, otherwise 0
*/
int check_sorted(listint_t **list)
{
	listint_t *head = *list;

	if (head == NULL)
		return (0);
	while (head)
	{
		if (head->next && head->n > head->next->n)
			return (0);
		head = head->next;
	}
	return (1);
}

/**
 * head_swap - Swaps two nodes of a doubly linked list
 *				from the head of the list if conditions
 *				are met.
 * @list: The doubly linked list
 * @head: The pointer to a node
 *
 * Return: Pointer to a swapped node
*/
listint_t *head_swap(listint_t **list, listint_t *head)
{
	listint_t *current, *next_node;

	current = head;
	head->next->prev = head->prev;
	if (head->prev)
		head->prev->next = head->next;
	else
		*list = head->next;
	next_node = head->next;
	current->prev = next_node;
	current->next = NULL;
	if (next_node->next)
	{
		current->next = next_node->next;
		next_node->next->prev = current;
		next_node->next = current;
	}
	else
		next_node->next = current;
	print_list(*list);

	return (next_node);
}

/**
 * tail_swap - Swaps nodes from the tail of the doubly
 *				linked list if conditions are met
 * @list: The doubly linked list
 * @tail: The pointer to a node
 *
 * Return: Pointer to a swapped node
*/
listint_t *tail_swap(listint_t **list, listint_t *tail)
{
	listint_t *next_node, *current;

	next_node = tail;
	tail->prev->next = tail->next;
	if (tail->next)
		tail->next->prev = tail->prev;
	current = tail->prev;
	next_node->prev = NULL;
	next_node->next = NULL;
	if (current->prev)
	{
		next_node->prev = current->prev;
		current->prev->next = next_node;
		next_node->next = current;
		current->prev = next_node;
	}
	else
	{
		next_node->next = current;
		current->prev = next_node;
		*list = next_node;
	}
	print_list(*list);

	return (next_node);
}
