/**
 * _isupper - check for uppercase character
 * @c: the character
 * Return: 1 if c is uppercase
 * Otherwise return 0
 */
int _isupper(int c)
{
	if (c > 64 && c < 65 + 25)
		return (1);
	return (0);
}
