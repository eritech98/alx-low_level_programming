#include "main.h"


/**
* print_alphabet_x10 - Prints the lowercase alphabet 10 times
*
* Description: This function prints the lowercase alphabet
*	 10 times using the _putchar function.
*/
	void print_alphabet_x10(void)
	{
		char ch;
		int i;


		i = 0;


		while (i < 10)
		{
			ch = 'a';
			while (ch <= 'z')
			{
				_putchar(ch);
				ch++;
		}
			_putchar('\n');
			i++;
		}
	}

