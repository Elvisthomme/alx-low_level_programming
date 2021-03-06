#include "main.h"

/**
  * append_text_to_file - append a text content to a file
  * @filename: the name of the file
  * @text_content: the text to add
  * Return: 1 on success, -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
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
