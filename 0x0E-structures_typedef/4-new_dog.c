#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	unsigned int i, lname, lowner;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (lname = 0; name[lname]; lname++)
	{
		lname++;
	}
	dog->name = malloc(sizeof(char) * lname);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < lname; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (lowner = 0; owner[lowner]; lowner++)
	{
		lowner++;
	}
	dog->owner = malloc(sizeof(char) * (lowner + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	for (i = 0; i < lowner; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
