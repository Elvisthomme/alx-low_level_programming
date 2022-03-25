/**
 * leet - encode a string into 1337
 * @str: the string to encode
 * Return: a pointer to the encoding string
 */
char *leet(char *str)
{
	int i = 0;
	int j;
	char char_arr[] = {'A', 'a', 'E', 'e', 'O', 'o', 'l', 'L', 't', 'T'};
	char code_arr[] = {'4', '4', '3', '3', '0', '0', '1', '1', '7', '7'};
	char *c;


	while (*(str + i))
	{
		c = str + i;

		for (j = 0; j < 10; j++)
		{
			if (*c == char_arr[j])
			{
				*c = code_arr[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
