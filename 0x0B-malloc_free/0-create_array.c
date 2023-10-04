#include "main.h"

/**
 * *create_array - do sth dl.
 * @c: dkd
 * @size: kd
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
	return (0);

	while (size--)
		n[size] = c;

	return (n);

}
