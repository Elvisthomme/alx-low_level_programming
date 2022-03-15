/**
 * _isalpha - check for alphabetic character
 * @c: the character to check
 * Return: 1 if c is a letter
 * Otherwise return 0
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 97 + 26) || (c > 64 && c < 65 + 26))
		return (1);
	else
		return (0);
}
