#include "main.h"
/**
* _strstr - a function that locates a substring.
* @haystack: string haystack
* @needle: string needle
* Return: Returns a pointer to the beginning
*of the located substring
*or NULL if the substring is not found.
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

