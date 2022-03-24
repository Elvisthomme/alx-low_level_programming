/**
 * cap_string - Capitalize all words of a string
 * @str: the string
 * Return: a pointer to the capitalize string
 */
char *cap_string(char *str)
{
	int i = 0;
	char p;

	while (*(str + i))
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			p = *(str + i - 1);
			if (p == ',' || p == ';' || p == '.'
				|| p == ' ' || p == '!'
				|| p == '?' || p == '"'
				|| p == '(' || p == ')'
				|| p == '{' || p == '}'
				|| p == '\n' || p == '\t'
				|| i == 0)
				*(str + i) -= 32;
		}
		else if (*(str + i) >= 'A' && *(str + i) <= 'Z')
		{
			p = *(str + i - 1);
			if (p != ',' && p != ';' && p != '.'
				&& p != ' ' && p != '!'
				&& p != '?' && p != '"'
				&& p != '(' && p != ')'
				&& p != '{' && p != '}'
				&& p != '\n' && p != '\t'
				&& i != 0)
				*(str + i) -= 32;
		}
		i++;
	}
	return (str);
}
