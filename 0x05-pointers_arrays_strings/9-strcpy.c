/**
 * _strcpy - copy the point from src to dest
 * @dest: the destination
 * @src: the source
 * Return: a pointer to @dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	/* to include the terminating null byte*/
	*(dest + i) = *(src + i);
	return (dest);
}
