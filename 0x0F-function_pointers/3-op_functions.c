/**
  * op_add - add two numbers
  * @a: the first number
  * @b: the second number
  * Return: the sum of a and b
  */
int op_add(int a, int b)
{
	return (a + b);
}


/**
  * op_sub -  difference of two number
  * @a: the number where we must remove
  * @b: the number to remove from
  * Return: the difference of a and b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiply two numbers
  * @a: the first number
  * @b: the second number
  * Return: the product of a and b
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - division of @a by @b
  * @a: the number to  divide
  * @b: the divider
  * Return: the division of a by b
  */
int op_div(int a, int b)
{
	return (a / b);
}

/**
  * op_mod - compute the rememder of the division of a by b
  * @a: the number to divide
  * @b: the divider
  * Return: the rememder of a/b
  */
int op_mod(int a, int b)
{
	return ((a - ((a / b) * b)));
}
