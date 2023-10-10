#include"dog.h"
#include <stdlib.h>

/**
 * free_dog - do sth dl.
 * @d: kjd
 *
 * Free: dklsjk ldskjv l
 */

void free_dog(dog_t *d)
{
	if (d)
	{
	if (d->name)
		free(d->name);
	if (d->onwner)
		free(d->owner);
	free(d);
	}
}
