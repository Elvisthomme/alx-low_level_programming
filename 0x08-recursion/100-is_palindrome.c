/**
  * _strlen_recursion - compute the length of a string
  * @s: the string
  * Return: the length of the string
  */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion((s + 1)));
}

/**
  * check_palindrome check if a string is a palindrome
  * @s: the string to test
  * @b: the first caracter to test
  * @e: the last caracter to test
  * Return: 1 if n is a palindrome, 0 else
  */
int check_palindrome(char *s, int b, int e)
{
	if (b >= e)
		return (1);
	if (*(s + b) == *(s + e))
		return (check_palindrome(s, b + 1, e - 1));
	return (0);
}


/**
  * is_palindrome check if a string is a palindrome
  * @s: the string to test
  * Return: 1 if n is a palindrome, 0 else
  */
int is_palindrome(char *s)
{
	int size = _strlen_recursion(s);

	if (size < 2)
		return (1);
	return (check_palindrome(s, 0, size - 1));
}
