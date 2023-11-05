#include "lists.h"

/**
 * list_int_len - Counts the number of elements in a linked list
 *
 * @h: The linked list to count
 *
 * Return: Number of elements in the linked list.
 */
size_t list_int_len(const list_int_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		++len;

		h = h->next;
	}

	return (len);
}

/**
 * get_node_int_at_index - Gets a node from a linked list.
 *
 * @head: The head of the linked list
 * @index: The index to find in the linked list
 *
 * Return: The specific node of the linked list
 */
list_int_t *get_node_int_at_index(list_int_t *head, unsigned int index)
{
	list_int_t *current = head;
	unsigned int iter_times = 0;

	if (head)
	{
		while (current != NULL)
		{
			if (iter_times == index)
				return (current);
			current = current->next;
			++iter_times;
		}
	}
	return (NULL);
}

/**
 * is_palindrome - checks if a singly linked list is a palindrome.
 * @head: Head of the singly linked list.
 *
 * Return: 0 -> not a palindrome,
 *          1 -> palindrome.
 */

int is_palindrome(list_int_t **head)
{
	list_int_t *start = NULL, *end = NULL;
	unsigned int i = 0, len = 0, len_cyc = 0, len_list = 0;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (1);
	start = *head;
	len = list_int_len(start);
	len_cyc = len * 2;
	list = len_cyc - 2;
	end = *head;

	for (; i < len_cyc; i = i + 2)
	{
		if (start[i].n != end[len_list].n)

			return (0);

		len_list = len_list - 2;
	}

	return (1);
}
