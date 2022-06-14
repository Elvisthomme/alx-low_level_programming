/**
 * _strncpy - n byte of src to dest
 * @dest: the destination
 * @src: the source
 * @n: the number of byte to copy
 * Return: a pointer to @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	if (n == 0)
		return (dest);
	while (i < n)
	{
		*(dest + i) = *(src + j);
		if (*(src + j))
		{
			j++;
		}
		i++;
	}
	/* to include the terminating null byte*/
	return (dest);
}
