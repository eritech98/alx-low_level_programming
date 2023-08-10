#include <stdlib.h>
#include "main.h"

/**
*malloc_checked - This func allocates memory using malloc
*@b: bytes to allocate
*Return: will bring back  pointer
*/

void *malloc_checked(unsigned int b)/* This is our prototype*/
{
	void *ptr;

	ptr = malloc(b);/*This pointer will hold address of bytes b*/


	if (ptr == NULL)/*If memory allocation  fails, exit with 98*/
		exit(98);

	return (ptr);/*return adress to the caller*/
}
