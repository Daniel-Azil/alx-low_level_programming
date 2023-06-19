#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog.
 * @d: struct.
 * @name: ginitializes pointer of dog's name.
 * @age: initializes varible of dog's age.
 * @owner: initializes pointer of owner.
 * Return: Returns nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->age = age;
		d->name = name;
		d->owner = owner;
	}
}
