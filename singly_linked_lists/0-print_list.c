#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer the head.
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s", h->len, h->str);
		}
		i++;
		h = h->next;
	}
	return (i);
}
