#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - function that prints a struct dog
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: Pointer to the new_dog struct or NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len_name, len_owner, i;
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len_name = 0; name[len_name] != '\0'; len_name++)
	{
	}
	for (len_owner = 0; owner[len_owner] != '\0'; len_owner++)
	{
	}
	new->name = malloc(sizeof(new->name) * len_name);
	for (i = 0; i <= len_name; i++)
		new->name[i] = name[i];
	new->owner = malloc(sizeof(new->owner) * len_owner);
	if (new->name == NULL || new->owner == NULL)
	{
		free(new);
		free(new->name);
		free(new->owner);
		return (NULL);
	}
	for (i = 0; i <= len_owner; i++)
		new->owner[i] = owner[i];
	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}
