#include "lists.h"


/**
 * sum_listint - wil return the sum of all dat n
 * of a listin linked list
 * @head:listin link pointer to the 1st nde
 * Return:This is the sum of all the data n
 *also will return 0 if node is empty
*/

	int sum_listint(listint_t *head)
	{
		int addition1 = 0;
		listint_t *temporary = NULL;

		if (head == NULL)
		{
			return (0);
		}

		temporary = head;

		while (temporary != NULL)
		{

		addition1 += temporary->n;

		temporary = temporary->next;
}

return (addition1);
}
