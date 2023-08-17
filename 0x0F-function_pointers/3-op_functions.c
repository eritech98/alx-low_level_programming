#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);



/**
 * op_add - Thhis wil bring back sum of 2 no.
 * @a: number 1
 * @b: Value 2
 *
 * Return: sum
 */


int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the diference
 * @a: Number1
 * @b: Number2
 *
 * Return: The difrence of Number 1 ans 2
 */
int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - Returns the produts
 * @a: The first number
 * @b: The second number.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the division of two numbers.
 * @a: Number1.
 * @b: The second number.
 *
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mod - Returns the rem of the division of two numbers.
 * @a: Number1
 * @b: The second number.
 *
 * Return: The remainder of the division
 */

int op_mod(int a, int b)
{
	return (a % b);
}
