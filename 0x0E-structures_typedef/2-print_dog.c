#include "dog.h"
/**
  * print_dog - print a struct dog
  * @d: a pointer to the dog struct
  */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		if (d->age)
			printf("Age: %f\n", d->age);
		else
			printf("Name: (nil)\n");
		if (d->owner)
			printf("Name: %s\n", d->owner);
		else
			printf("Name: (nil)\n");
	}
}
