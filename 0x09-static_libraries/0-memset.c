#include "main.h"
/**
 * _memset - This is our function
 * @s: this is our string
 * @b:where to be copied from
 * @n:This is bytes
 *
 * Return: Our return value is a charcter
 */
char *_memset(char *s, char b, unsigned int n)
{
	int erick = 0;


	for (; n > 0; erick++)
	{
		s[erick] = b;
		n--;
	}
	return (s);
}
