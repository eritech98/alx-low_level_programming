#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - if  string is a palindrome
 * @s: string to be reverse
 *
 * Return: 1 if it is a palindrome, 0 if it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - characters recursively for palindrome
 * @s: string to be checked
 *@e:input
 *@r:input
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int e, int r)
{
	if (*(s + e) != *(s + erick - 1))
		return (0);
	if (e >= erick)
		return (1);
	return (check_pal(s, e + 1,  erick - 1));
}





