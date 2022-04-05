#include "main.h"

/**
  * argstostr - concatenate all arguments
  * @ac: the number of arguments
  * @av: the arguments vector
  * Return: a pointer to the concatenate string or NULL
  */
char *argstostr(int ac, char **av)
{
	char *con;
	int i = 0;
	int j = 0;
	int t = 0;
	int k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		if (av[i] != NULL)
			while (av[i][j])
			{
				j++;
				t++;
			}
	}

	con = malloc(sizeof(char) * (t + ac + 1));
	if (con == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		if (av[i] != NULL)
		{
			while (av[i][j])
			{
				*(con + k) = av[i][j];
				k++;
				j++;
			}
			*(con + k) = '\n';
			k++;
		}
	}
	*(con + k) = '\0';
	return (con);
}
