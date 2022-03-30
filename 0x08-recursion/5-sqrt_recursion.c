/**
 * check_square - check if num * num = n
 * @num: a number
 * @n: a number
 * Return: the natural square root of n
 */
int check_square(int num, int n)
{
	if (n < 0 || num < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	if ((num * num) == n)
		return (num);
	return (check_square(num - 1, n));
}


/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: the number
 * Return: the natural square root of n
 * If n does not have a natural square root, the function should return -1
 */
int _sqrt_recursion(int n)
{
	return (check_square(n / 2, n));
}
