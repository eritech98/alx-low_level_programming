#include "lists.h"


/**
 * free_listint - A function that frees a listint_t list.
 * @head: This is the listint_t pointer to the 1st node.
 * Return: void,nothing
*/

	void free_listint(listint_t *head)
	{
		listint_t *tempoRary = NULL;

		if (head == NULL)
		{}

		tempoRary = head;

		while (tempoRary != NULL)
		{
		tempoRary = head->next;

		free(head);

		head = tempoRary;
		}
	}
