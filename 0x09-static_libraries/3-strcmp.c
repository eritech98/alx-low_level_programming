#include "main.h"
/**
 * _strcmp -  aunction that does string comparison
 * @s1: string 1
 * @s2: string 2
 *
 * Return: will return data type which is an integer
 */
int _strcmp(char *s1, char *s2)
{
	int er = 0;

	while (s1[er] != '\0' && s2[er] != '\0')
	{
		if (s1[er] != s2[er])
		{
			return (s1[er] - s2[er]);
		}
	er++;
	}
	return (0);
}

