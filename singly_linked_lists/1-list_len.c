#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer the head.
 * Return: the number of nodes.
 */
size_t list_len(const list_t *h)
{
	int len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
