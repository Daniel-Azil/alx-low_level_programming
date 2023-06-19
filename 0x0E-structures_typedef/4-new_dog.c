#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - new dog function.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: owner.
 * Return: struct.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dg_pnt;
	int var, dg_name, dg_owner;

	dg_pnt = malloc(sizeof(*dg_pnt));
	if (dg_pnt == NULL || !(name) || !(owner))
	{
		free(dg_pnt);
		return (NULL);
	}

	for (dg_name = 0; name[dg_name]; dg_name++)
		;

	for (dg_owner = 0; owner[dg_owner]; dg_owner++)
		;

	dg_pnt->name = malloc(dg_name + 1);
	dg_pnt->owner = malloc(dg_owner + 1);

	if (!(dg_pnt->name) || !(dg_pnt->owner))
	{
		free(dg_pnt->owner);
		free(dg_pnt->name);
		free(dg_pnt);
		return (NULL);
	}

	for (var = 0; var < dg_name; var++)
		dg_pnt->name[var] = name[var];
	dg_pnt->name[var] = '\0';

	dg_pnt->age = age;

	for (var = 0; var < dg_owner; var++)
		dg_pnt->owner[var] = owner[var];
	dg_pnt->owner[var] = '\0';

	return (dg_pnt);
}
