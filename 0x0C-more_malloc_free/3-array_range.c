#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - do sth dl.
 * @max: dkd
 * @min: kd
 * Return: 0
 */

int *array_range(int min, int max)
{
	int i, len;
	int *ptr;

	if (min > max)
	return (NULL);
	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = min++;
	return (ptr);
}

