#include"stdio.h"
#iclude <stdlib.h>

/**
 * free_ dog - do sth dl.
 * @d: kjd
 *
 * Description: dklsjk ldskjv l
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
