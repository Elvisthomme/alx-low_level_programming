/**
  * _memset - fill memory with a constant byte
  * @s: the pointer to the memory area
  * @b: the constant byte
  * @n: the number of byte to fill
  * Return: a pointer to the memory area s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	if (n == 0)
		return (s);
	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
