#include "dog.h"
#include <stdlib.h>
/**
* free_dog - frees dogs
* @d: points to the structure of dogs
*/
void free_dog(dog_t *d)
{
	free(d);
	free(d->name);
	free(d->owner);
}
