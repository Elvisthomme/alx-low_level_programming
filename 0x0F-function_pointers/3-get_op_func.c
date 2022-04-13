#include "3-calc.h"

/**
  * get_op_func - select the correct function to perform the operation
  * @s: the string value of the operator
  * Return: a function that do the operation indicate by @s
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i = 0;

	return (ops[i]->f);
}
