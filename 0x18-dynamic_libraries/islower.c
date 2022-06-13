/**
 * _islower - checks for lowercase character
 * @c: the character to check
 * Return: 1 if c is lowercase
 * Otherwise return 0
 */
int _islower(int c)
{
	if (c > 96 && c < 97 + 26)
		return (1);
	else
		return (0);
}
