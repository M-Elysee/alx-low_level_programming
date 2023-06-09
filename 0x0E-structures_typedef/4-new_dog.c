#include "dog.h"
#include <stdlib.h>
/**
*new_dog - it creates a new dog
*@name: points to the name of the dog
*@age: is theage of the dog
*@owner: points to the name of the owner
*Return: a pointer of the new dog in the memory
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, k, m;
	dog_t *d;

	for (i = 0; name != NULL && name[i] != '\0'; i++)
	{}
	for  (j = 0; owner != NULL && owner[j] != '\0'; j++)
	{}
	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	d->name = malloc(sizeof(char) * i + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * j + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		d->name[k] = name[k];
	}
	for (m = 0; m < j; m++)
	{
		d->owner[m] = owner[m];
	}
	d->name[i] = '\0';
	d->owner[j] = '\0';
	d->age = age;
	return (d);
}
