#include "main.h"


/**
* print_sign - Prints the sign of a number
*
* Description: This function checks the sign of a given number and prints
*	"+" if the number is positive, "-" if the number is negative,
*	and "0" if the number is zero.
* @n: The number to be checked
*
* Return: "+" if the number is positive, "-" if the number is negative,
*and "0" if the number is zero.
*/

int print_sign(int n)
	{
		if (n > 0)
		{
			_putchar('+');
			return (1);
		} else if (n == 0)
		{
			_putchar(48);
			return (0);
		} else if (n < 0)
		{
			_putchar('-');
		}
			return (-1);
	}


