/**
 * _strcmp - compare two strings
 * @s1: the first string
 * @s2: the second string
 * Description: compare @s1 and s2
 * and return a negative, null or positive value
 *
 * Return: -15, 0, or 15 respectively if @s1 less, equal or greather than @s2
 */
int _strcmp(char *s1, char *s2)
{
	int result = 0;
	int i = 0;

	while (*(s1 + i))
	{
		if (*(s1 + i) == *(s2 + i))
			i++;
		else if (!*(s2 + i) || *(s1 + i) > *(s2 + i))
		{
			result = 15;
			break;
		}
		else if (*(s1 + i) < *(s2 + i))
		{
			result = -15;
			break;
		}
	}
	if (!*(s2 + --i))
		result = -15;
	return (result);
}
