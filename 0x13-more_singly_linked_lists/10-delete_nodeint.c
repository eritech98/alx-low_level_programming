#include "lists.h"





/**
 * delete_nodeint_at_index - A function thet deletes the node at given index
 * of a linked list.
 * @head: This is a pointer to listint_t pointer
 * @index: This is the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 failed
*/



		int delete_nodeint_at_index(listint_t **head, unsigned int index)
		{
		listint_t *temporary, *pointer = NULL;

		unsigned int erick = 1;

		temporary = NULL;

		if (head == NULL || *head == NULL)
		{

		return (-1);
		}
		pointer = *head;
		if (index == 0)

		{
			pointer = pointer->next;
			free(*head);
			*head = pointer;
		return (1);
		}

		while (erick < index)
		{

		erick++;
		pointer = pointer->next;
		if (pointer == NULL || pointer->next == NULL)
		{
		return (-1);
		}
}

		temporary = pointer->next;
		pointer->next = pointer->next->next;
		free(temporary);
		temporary = NULL;

		return (1);
		}
