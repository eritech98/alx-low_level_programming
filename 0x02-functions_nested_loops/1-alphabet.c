#include "main.h"

/**
*print_alphabet - Make the alphabet
* Description: This function serves as the entry point of the program.
*Return: void
*/

	void print_alphabet(void)
	{
		char letter;


		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);

_putchar('\n');
	}

