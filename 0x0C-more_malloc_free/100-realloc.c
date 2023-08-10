#include <stdlib.h>
#include "main.h"




/**
*_realloc - reallocates a memory block
*@ptr: pointer
*@old_size: size of ALLocated mem
*@new_size: new size of new mem
*
*Return: pointer
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *erick;
	unsigned int e;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);

	erick = ptr;

	if (new_size < old_size)
	{
		for (e = 0; e < new_size; e++)
			ptr1[e] = erick[e];
	}

	if (new_size > old_size)
	{
		for (e = 0; e < old_size; e++)
			ptr1[e] = erick[e];
	}

	free(ptr);
	return (ptr1);
}
