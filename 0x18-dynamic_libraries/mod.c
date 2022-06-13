/**
  * mod - compute the rest of a division between two numbers
  * @a: the first number
  * @b: the second number
  * Return: the rest of a/b
  */
long int mod(long int a, long int b)
{
	return (a - (a / b) * b);
}
