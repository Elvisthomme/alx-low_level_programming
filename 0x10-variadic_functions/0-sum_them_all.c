#include "stdarg.h"
/**
  * sum_them_all - sum all it parameters
  * @n: the number of parameters
  * @...: a list of integer
  * Return: the sum of all its parameters or 0 if n == 0
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int num, sum;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		sum = sum + num;
	}
	va_end(ap);
	return (sum);
}
