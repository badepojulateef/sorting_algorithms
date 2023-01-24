#include "sort.h"

void swap(listint_t **head, listint_t *node1, listint_t *node2);

/**
 * insertion_sort_list - sorts a linked list
 *
 * @list: the linked list to be sorted
 * Return: Nothing.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	curr = (*list)->next;
	while (curr && curr->prev)
	{
		while (curr->n < curr->prev->n)
		{
			tmp = curr->prev;
			swap(list, tmp, curr);
			print_list(*list);
			curr = curr->prev;
		}
		curr = curr->next;
	}
}

/**
 * swap - swaps nodes of a linked list
 *
 * @head: the head node
 * @node1: the first node
 * @node2: the seconf node
 * Return: Nothing.
 */
void swap(listint_t **head, listint_t *node1, listint_t *node2)
{
	listint_t *prev, *next;

	prev = node1->prev;
	next = node2->next;

	if (prev != NULL)
		prev->next = node2;
	else
		*head = node2;

	node1->prev = node2;
	node1->next = next;
	node2->prev = prev;
	node2->next = node1;
	if (next)
		next->prev = node1;
}
