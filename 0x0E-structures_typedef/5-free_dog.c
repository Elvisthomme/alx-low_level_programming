#include "dog.h"

/**
  * free_dog - free a struct dog
  * @d: a poiter to the dog structure
  */
void free_dog(dog_t *d)
{
	free((*d).name);
	free((*d).owner);
	free(d);
}
