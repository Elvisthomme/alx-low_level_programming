/**
 * _strcat - concatenate two strings
 * @dest: the destination string
 * @src: the source string
 * Description: add @src after @dest
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j=0;

	while (*(dest + j))
		j++
	while (*(src + i))
	{
		*(dest + j) = *(src + i);
		j++;
		i++;
	}
	*(dest + j) = *(src + i);
	return (*dest);
}
