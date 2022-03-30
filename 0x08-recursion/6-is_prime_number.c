/**
 * check_prime_num- check if n is a prime number
 * @n: a number
 * @d: the factor to test with n
 * Return: 1 if n is a prime number, 0 else
 */
int check_prime_num(int n, int d)
{
	if (d == 1)
		return (1);
	if (n % d == 0)
		return (0);
	return (check_prime_num(n, d - 1));
}


/**
 * is_prime_number - check if n is a prime number
 * @n: a number
 * Return: 1 if n is a prime number, 0 else
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (check_prime_num(n, n / 2));
}
