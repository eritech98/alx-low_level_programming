#include "lists.h"





/**
 * listint_len - a function that returns the number of elements
 * @h: this is the pointer to the first node
 * Return: Will return number of codes
*/

	size_t listint_len(const listint_t *h)
	{
		const listint_t *mypointer = NULL;

		int elementsno = 0;

		if (h == NULL)
		{
			return (0);
		}

		mypointer = h;
		while (mypointer != NULL)
		{
			mypointer = mypointer->next;
			elementsno++;
		}

		return (elementsno);
	}
