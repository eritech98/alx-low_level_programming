#include "main.h"
/**
 * _strstr - Our function
 * @haystack: This is the first input value
 * @needle: This is the second Inpt value
 * Return: Must be 0;
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *e = haystack;
		char *r = needle;


		while (*e == *r && *r != '\0')
		{
			e++;
			r++;
		}


		if (*r == '\0')
			return (haystack);
	}


	return (0);
}

