
#include "lists.h"

/**
 * add_nodeint - this will add a new node at beg of list
 * @head: pointer to listint_t thst point to 1st node
 * @n:int data for the new node
 * Return: address of the new element, or NULL if it ails
*/


	listint_t *add_nodeint(listint_t **head, const int n)
	{
	listint_t *pointer = malloc(sizeof(listint_t));

	if (!pointer)
	{
		return (NULL);
		free(pointer);
	}

	pointer->n = n;

	pointer->next = *head;

	*head = pointer;

	return (pointer);

	}
