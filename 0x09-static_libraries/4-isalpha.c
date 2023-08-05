#include "main.h"

/**
 * _isalpha - Our function
 * @c: FIRST input
 * Return: Must be 0
 *
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
