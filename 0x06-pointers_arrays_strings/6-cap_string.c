#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int erick = 0;

	while (str[erick])
	{
		while (!(str[erick] >= 'a' && str[erick] <= 'z'))
			erick++;

		if (str[erick - 1] == ' ' ||
		    str[erick - 1] == '\t' ||
		    str[erick - 1] == '\n' ||
		    str[erick - 1] == ',' ||
		    str[erick - 1] == ';' ||
		    str[erick - 1] == '.' ||
		    str[erick - 1] == '!' ||
		    str[erick - 1] == '?' ||
		    str[erick - 1] == '"' ||
		    str[erick - 1] == '(' ||
		    str[erick - 1] == ')' ||
		    str[erick - 1] == '{' ||
		    str[erick - 1] == '}' ||
		    erick == 0)
			str[erick] -= 32;

		erick++;
	}

	return (str);
}

