#include "main.h"

/**
 * *malloc_checked - do sth dl.
 * @b: kd
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (p == 0)
	exit(98);

	return (p);
}
