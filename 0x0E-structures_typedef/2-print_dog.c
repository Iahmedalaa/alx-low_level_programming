#include"dog.h"
#include<stdio.h>

/**
 * print_dog - do sth dl.
 * @d: dka
 *
 * Description: dklsjk ldskjv l
 */

void print_dog(struct dog *d)
{
	if (d)
{
	printf("Na: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Own: %s\n", d->owner ? d->owner : "(nil)");
}
}
