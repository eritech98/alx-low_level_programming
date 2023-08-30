#include "lists.h"





/**
 * insert_nodeint_at_index - will insert a new node
 * @head: a pointer to listin that points to 1st node
 * @idx: index of the first the list to be added at 0
 * @n: This is the int data part of the node
 * Return: bring the address of the new node, and nul it fails
*/



	listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
	{
		unsigned int erick = 1;


		listint_t *temporary, *pointer = malloc(sizeof(listint_t));

		temporary = NULL;

		if (!pointer)
		{

			free(pointer);
			pointer = NULL;
			return (pointer);
		}


		pointer->n = n;

		pointer->next = NULL;

		temporary = *head;

		if (idx == 0)
		{
			pointer->next = *head;
			*head = pointer;
			return (pointer);
		}

		while (erick < idx)
		{
		erick++;

		temporary = temporary->next;

		if (temporary == NULL)
		{

		return (NULL);
		break;
		}
}

		if (temporary == NULL)
		{}

		pointer->next = temporary->next;

		temporary->next = pointer;

		return (pointer);
}
