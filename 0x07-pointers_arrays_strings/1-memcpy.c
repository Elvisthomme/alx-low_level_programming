/**
  * _memcpy - copies n bytes from memory area src to memory area dest
  * @dest: the destination area
  * @src: the source
  * @n: the number the bytes to copy
  * Return: a pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	if (n == 0)
		return (dest);
	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
