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
	int check = 0;

	while (*(s + i))
	{
		c = *(s + i);
		i++;
		if ((c >= '0' && c <= '9'))
		{
			int_val = int_val * power + c - 48;
			power *= 10;
			check++;
		}
		else if (c == 45)/* the minus sign*/
		{
			int_val = -int_val;
		}
		else if (c == '+')
			continue;
		else if (check > 1)
			break;
	}
	return (int_val);
}
