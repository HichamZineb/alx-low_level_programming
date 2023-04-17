#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: returns struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)

{
	dog_t *dog;
	int i, lname, lowner;

	for (i = 0; name[i] != '\0'; i++)

	lname = i;

	for (i = 0; owner[i] != '\0'; i++)

	lowner = i;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (lname + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (lowner + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	for (i = 0; i < lname; i++)
		dog->name[i] = name[i];
	for (i = 0; i < lowner; i++)
		dog->owner[i] = owner[i];
	dog->age = age;
	return (dog);
}
