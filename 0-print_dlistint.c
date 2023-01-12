#include "lists.h"

/**
 * print_dlistint - print a double linked list
 * @h: head of the linked list
 *
 * Return: size_t, size of thr linked list
 */
size_t print_dlisttint(const dlistint_t *h)
{
	size_t n = 0;

	while (h != 0)
		printf("%d\n", h->n) n++, h = h->next;
	return (n)
}
