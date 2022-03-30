/**
  * _strspn - get the length of a prefix substring
  * @s: the initial segment
  * @accept: the accepted bytes
  * Return: the number of bytes of accept in s
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int counter = 0;

	while (*(accept + i))
	{
		while (*(s + j))
		{
			if (*(accept + i) == *(s + j))
			{
				counter++;
				break
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (counter);
}
