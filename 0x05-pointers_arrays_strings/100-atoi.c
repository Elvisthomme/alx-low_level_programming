/**
 * _atoi - convert a string to an integer
 * @s: the string
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
	int int_val = 0;
	int power = 1;
	int i = 0;
	int c;

	while (*(s + i))
	{
		c = *(s + i);
		i++;
		if ((c >= '0' && c <= '9'))
		{
			int_val = int_val * power + c;
			power *= 10;
		}
		else if (c == '-')
		{
			int_val = -int_val;
		}
	}
	return (int_val);
}
