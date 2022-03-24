/**
 * leep - encode a string into 1337
 * @str: the string to encode
 * Return: a pointer to the encoding string
 */
char *leet(char *str)
{
	char *code;
	int i = 0;
	char c;

	code = &c; /* just to initialize code*/
	*(code + 'a') = '4';
	*(code + 'A') = '4';
	*(code + 'e') = '3';
	*(code + 'E') = '3';
	*(code + 'o') = '0';
	*(code + 'O') = '0';
	*(code + 't') = '7';
	*(code + 'T') = '7';
	*(code + 'l') = '1';
	*(code + 'L') = '1';

	while (*(str + i))
	{
		if (*(str + i ) == 'a' || *(str + i) == 'A' 
			|| *(str + i) == 'e' || *(str + i) == 'E'
			|| *(str + i) == 'o' || *(str + i) == 'O'
			|| *(str + i) == 'l' || *(str + i) == 'L'
			|| *(str + i) == 't' || *(str + i) == 'T')
		{
			*(str + i) = *(code + *(str + i));
		}
		i++;
	}
	return (str);
}
