/**
 * _strncat - concatenate two strings
 * @dest: the destination string
 * @src: the source string
 * @n: the number of byte to take in @src
 * Description: add n byte of @src after @dest
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + j))
		j++;
	while (*(src + i) && i < n - 1)
	{
		*(dest + j) = *(src + i);
		j++;
		i++;
	}
	*(dest + j) = *(src + i);
	return (dest);
}
