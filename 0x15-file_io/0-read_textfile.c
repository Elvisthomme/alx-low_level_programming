#include "main.h"

/**
  * read_textfile - read a text file a print it to POSIX stdout
  * @filename: the name of the file
  * @letters: the number of letters to print
  * Return: the number of printed caracters
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, i;
	char *str;

	if (!filename || letters < 1)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	str = malloc(sizeof(str) * letters);
	if (str == NULL)
	{
		close(fd);
		return (0);
	}
	i = read(fd, str, letters);
	if (i == -1)
	{
		close(fd);
		free(str);
		return (0);
	}
	i = write(STDOUT_FILENO, str, i);
	if (i == -1)
	{
		close(fd);
		free(str);
		return (0);
	}
	close(fd);
	free(str);
	return (i);
	
}
