#include "function_pointers.h"

/**
 * print_name - do sth dl.
 * @f: kd
 * @name: dkld
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	f(name);
}
