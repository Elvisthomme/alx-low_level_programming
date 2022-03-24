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

	while (*(src + i) && i < n - 1)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	/* to include the terminating null byte*/
	*(dest + i) = *(src + i);
	return (dest);
}
