#include "lists.h"

/**
 * dlistint_len - Returns the numb elements in a linked dlistint_t list.
 * @h: head pointer to tt.
 * Return: the number of elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len_t = 1;
	dlistint_t *ptr;

	if (h == NULL)
		return (0);

	ptr = h->next;
	while (ptr != NULL)
	{
		len_t++;
		ptr = ptr->next;
	}
	return (len_t);
}
