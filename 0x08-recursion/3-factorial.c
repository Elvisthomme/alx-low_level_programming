/**
  * factorial - compute the factorial of a given number
  * @n: the number
  * Return: -1 if n < 0 or the factorial of n
  */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
