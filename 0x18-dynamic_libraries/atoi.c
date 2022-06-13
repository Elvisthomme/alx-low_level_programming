/**
 * _atoi - convert a string to an integer
 * @s: the string
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
	unsigned int int_val = 0;
	int i = 0;
	int c;
	int check = 0;
	int sign = 1;

	while (*(s + i))
	{
		c = *(s + i);
		i++;
		if ((c >= '0' && c <= '9'))
		{
			int_val = int_val * 10 + c - 48;
			check++;
		}
		else if (c == 45)/* the minus sign*/
		{
			sign *= -1;
		}
		else if (c == '+')
			continue;
		else if (check > 1)
			break;
	}
	return (sign * int_val);
}
