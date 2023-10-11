#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *init_dog - function that creates a structure
  *@d: a pointer to struture dog to intialize it
  *@name: input value
  *@age: input value
  *@owner: input value
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
