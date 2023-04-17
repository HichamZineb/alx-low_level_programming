#include <stdlib.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i, lname, lowner;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	for (lname = 0; name[lname] != '\0'; lname++)

	dog->name = malloc(sizeof(char) * lname);

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < lname; i++)
		dog->name[i] = name[i];

	dog->age = age;

	for (lowner = 0; owner[lowner] != '\0'; lowner++)

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
