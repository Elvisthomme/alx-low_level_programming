/**
  * print_dog - print a struct dog
  * @d: a pointer to the dog struct
  */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name)
			printf("Name: %s", d->name);
		else
			printf("Name: (nil)");
		if (d->age)
			printf("Age: %d", d->age);
		else
			printf("Name: (nil)");
		if (d->owner)
			printf("Name: %s", d->owner);
		else
			printf("Name: (nil)");
	}
}
