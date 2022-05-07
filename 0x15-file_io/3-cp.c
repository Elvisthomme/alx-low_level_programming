#include "main.h"

/**
  * main - copy a file whit the text content
  * @argc: the number of argument
  * @argv: the argument vector
  * Return: 1 on success
  */
int main(int argc, char **argv)
{
	int fd_from, fd_to, i = 1;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_APPEND | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
		exit(98);
	}
	while (1)
	{
		i = read(fd_from, buffer, 1024);
		if (i == -1)
		{
			dprintf(STDERR_FILENO,
			"Error: Can't write to file %s\n", argv[2]);
			exit(99);
		}
		i = write(fd_to, buffer, i);
		if (i < 1024)
			break;
	}
	i = close(fd_from);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(99);
	}
	i = close(fd_to);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(99);
	}
	return (0);
}
