#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Selects the correct fuNC
 *               the operation asked by the user.
 * @s: The operator passED as arg
 *
 * Return: A pointer to the function corresponding
 *         to the operator given.
 */


int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int e = 0;

	while (ops[e].op != NULL && *(ops[e].op) != *s)
		e++;

	return (ops[e].f);
}
