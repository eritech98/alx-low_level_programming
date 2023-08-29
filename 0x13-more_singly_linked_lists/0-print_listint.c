
#include "lists.h"




/**
 *print_listint - will prin all the elements
 *@h: this is the listin_t pointer
 *Return: Will return NUmber of nodes
*/




	size_t print_listint(const listint_t *h)
	{
		size_t all = 0;
		const listint_t *pointer = NULL;

		if (h == NULL)
		{
			return (0);
		}

		pointer = h;

		while (pointer != NULL)
		{
			printf("%d\n", pointer->n);
			pointer = pointer->next;
			all++;
		}

	return (all);
}
