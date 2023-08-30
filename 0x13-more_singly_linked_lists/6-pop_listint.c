#include "lists.h"



/**
 * pop_listint -This function deletes the head node of linked list,
 * and with later return the head node’s data n
 * @head: listin linked list that points to 1st node
 * Return: wil return the head node's data n
*/

	int pop_listint(listint_t **head)
	{


	listint_t *temporary1 = NULL;

	int data;

	if (*head == NULL)
	{
		return (0);
	}

		temporary1 = *head;

		data = temporary1->data;

		temporary1 = temporary1->next;
		free(*head);
		*head = temporary1;

	return (data);
	}
