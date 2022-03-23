/**
 * string_toupper - change all lowercase letters of a string to upper
 * @str: the string
 * Return: the string in upper case
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
			*(str + i) -= 32;
		i++;
	}
	return (str);
}
