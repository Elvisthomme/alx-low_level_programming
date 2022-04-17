#include "dog.h"

/**
  * new_dog - create a new dog
  * @name: the name of the dog
  * @age: the age of the dog
  * @owner: the owner of the dog
  * Return: a new dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog, d;
	char *n, *o;
	int i;

	if (name)
	{
		i = 0;
		while (*(name + i))
			i++;
		n = malloc(sizeof(char) * (i + 1));
		if(!n)
			return (NULL);
		else
		{
			while (i)
			{
				*(n + i) = *(name + i);
				i--;
			}
			*(n + i) = *(name + i);
		}
	}
	if (owner)
	{
		i = 0;
		while (*(owner + i))
			i++;
		o = malloc(sizeof(char) * (i + 1));
		if(!o)
			return (NULL);
		else
		{
			while (i)
			{
				*(o + i) = *(owner + i);
				i--;
			}
			*(o + i) = *(owner + i);
		}
	}
	d.name = n;
	d.owner = o;
	d.age = age;
	dog = &d;
	return (dog);
}
