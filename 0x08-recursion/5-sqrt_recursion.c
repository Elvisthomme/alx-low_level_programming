/**
 * check_square - check if num * num = n
 * @num: a number
 * @n: a number
 * Return: the natural square root of n
 */
int check_square(int num, int n)
{
	if (num < 0)
		return (-1);
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
	int num = n / 2 < 46340 ? n / 2 : 46340;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (check_square(num, n));
}
