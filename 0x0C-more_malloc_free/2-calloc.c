#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *memeset - do sth dl.
 * @c: dkd
 * @a: kd
 * @n: kdls
 * Return: 0
 */

char *memeset(char *c, char a, unsigned int n)
{
	char *ptr = c;

	while (n--)
		*c++ = a;

	return (ptr);
}

/**
 * *_calloc - do sth dl.
 * @nmemb: dkd
 * @size: kd
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (nmemb == 0 || size == 0)
	return (NULL);

	m = malloc(sizeof(int) * nmemb);

	if (m == NULL)
	return (NULL);
	memeset(m, 0, sizeof(int) * nmemb);
	return (m);
}
