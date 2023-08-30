#include "lists.h"





/**
 * get_nodeint_at_index - will return the nth node of linked list.
 * @head: This is the listint_t pointer to the 1st node.
 * @index: indeex of the node starting at 0
 * Return:This is the nth node of a listint_t linked list,
 * NULL if node is not existing
*/

	listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
	{
		unsigned int erick = 0;
		listint_t *temporary = NULL;

		if (head == NULL)
		{

		return (NULL);
		}

		temporary = head;

		while (erick != index)
			{
			temporary = temporary->next;
			erick++;
		if (temporary == NULL)
			{

		return (NULL);

		break;
			}
			}


return (temporary);

}
