#include "main.h"

/**
  * create_file - create a file whit a text content
  * @filename: the name of the file
  * @text_content: the text to add
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}
	while (*(text_content + i))
		i++;
	i = write(fd, text_content, i);
	if (i == -1)
	{
		close(fd);
		return (-1);
	}
	i = close(fd);
	if (i == -1)
		return (-1);
	return (1);
}
