/**
 * _strlen - evaluate the length of a string
 * @s: the string
 * Return: the length of the string s
 */
int _strleng(char *s)
{
	int counter = 0;

	while (*(s + counter))
	{
		counter++;
	}
	return (counter);
}
