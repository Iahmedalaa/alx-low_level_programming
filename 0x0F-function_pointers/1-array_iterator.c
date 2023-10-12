#include "function_pointers.h"

/**
 * array_iterator - do sth dl. 
 * @arrat: dkd 
 * @size: kd
 * @action: lkds 
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *kak = array + size - 1;

	if (array && size && action)
		while (array <= kak)
			action(*array++);
}
