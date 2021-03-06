#include "main.h"


/**
  * copy - copy a file whit the text content
  * @argv: the argument vector of the main
  * @fd_from: the file descriptor source
  * @fd_to: the destination file descriptor
  * Return: 1 on success or the exit code for the main
  */
int copy(char **argv, int *fd_from, int *fd_to)
{
	int i = 1;
	char buffer[1024];

	while (i != 0)
	{
		i = read(*fd_from, buffer, 1024);
		if (i == -1)
		{
			dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
			return (98);
		}
		i = write(*fd_to, buffer, i);
		if (i == -1)
		{
			dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", argv[2]);
			return (99);
		}
	}
	return (1);
}
/**
  * main - copy a file whit the text content
  * @argc: the number of argument
  * @argv: the argument vector
  * Return: 1 on success
  */
int main(int argc, char **argv)
{
	int fd_from, fd_to, i = 1;

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
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	i = copy(argv, &fd_from, &fd_to);
	if (i != 1)
		exit(i);

	i = close(fd_from);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	i = close(fd_to);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
