#include "main.h"


/**
* _isupper(int c) - This is our function
* Description: a function that checks for uppercase character and Returns 1 if c is uppercase
* Returns 0 otherwise
* @c: This is our parameter
* Return: 1 if c is uppercase and 0 otherwise
*/

	int _isupper(int c)
	{
		if (c >= 65 && c <= 90)
		{
		return (1);
			}
		return (0);
	}
