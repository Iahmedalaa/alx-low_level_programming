#include "function_pointers.h"

/**
 * int_index - do sth dl.
 * @size: dkd
 * @array: kd
 * @cmp: kdl
 * Return: 0
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int z = 0;

	if (array && size && cmp)

		while (z < size)
		{
			if (cmp(array[z]))
				return (z);
			i++;
		}
	return (-1);
}
