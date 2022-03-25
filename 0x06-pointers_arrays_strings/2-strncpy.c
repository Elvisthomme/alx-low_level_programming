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
	while (*(src + i) && i < n - 1)
	{
		if (*(dest + j))
		{
			*(dest + i) = *(src + j);
			j++;
		}
		else 
		{
			j = 0;
			*(dest + i) = *(src + j);
			j++;
		}
		i++;
	}
	/* to include the terminating null byte*/
	*(dest + i) = *(src + i);
	return (dest);
}
