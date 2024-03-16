#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees memory allocated for a dog
 * @d: Pointer to the dog to be freed
 *
 * Description: This function frees memory allocated for a dog,
 *              including its name and owner strings.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
