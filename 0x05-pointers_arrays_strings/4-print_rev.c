/**
 * _strlen - evaluate the length of a string
 * @s: the string
 * Return: the length of the string s
 */
int _strlen(char *s)
{
	int counter = 0;

	while (*(s + counter))
	{
		counter++;
	}
	return (counter);
}

/**
 * print_rev - print a string, in reverse, followed by new line
 * @s: the string
 */
void print_rev(char *s)
{
	int str_len;
	int i;

	str_len = _strlen(*s);
	for (i = str_len; i >= 0; i--)
	{
		_putchar(*(s + str_len));
	}
	_putchar('\n');
}
