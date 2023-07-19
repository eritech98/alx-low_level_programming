#include "main.h"


	/**
	* print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
	* Description: Write a function that prints 10 times the alphabet
	*
	* followed by a new line
	* Return: void
	*/

	void print_alphabet_x10(void)
	{
		char er;
		int p;


		p = 0;


		while (p < 10)
		{
			er = 'a';
			while (er <= 'z')
			{
				_putchar(er);
				er++;
		}
			_putchar('\n');
			p++;
		}
	}

