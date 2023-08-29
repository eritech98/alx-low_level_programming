#include "lists.h"


/**
 * add_nodeint_end - A function adds a new node at the end of list
 * @head:A pointer to the list pointer that points to 1st node
 * @n: int data otr the new nodE
 * Return: the address of new element and NULL if it fails
*/

	listint_t *add_nodeint_end(listint_t **head, const int n)
	{
	listint_t *temporary, *pointer = malloc(sizeof(listint_t));

		if (!pointer)
			{
			return (NULL);
			free(pointer);
			}

			pointer->n = n;

			pointer->next = NULL;

			temporary = *head;

			if (*head == NULL)
			{
				*head = pointer;

			}
			else
			{
			while (temporary->next != NULL)
			{
				temporary = temporary->next;
			}
				temporary->next = pointer;
			}

				return (pointer);
	}
