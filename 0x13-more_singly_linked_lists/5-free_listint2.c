#include "lists.h"


/**
 * free_listint2 - This function frees list and sets head to Null.
 * @head: a pointer to list pointer that point to the first node
 * Return: void(nothing)
*/


		void free_listint2(listint_t **head)
		{
		listint_t *temporaryptr = NULL;


		if (head == NULL)
		{
		return;
		}

		temporaryptr = *head;

	while (temporaryptr != NULL)
	{
		temporaryptr = temporaryptr->next;
		free(*head);
		*head = temporaryptr;
	}
}
