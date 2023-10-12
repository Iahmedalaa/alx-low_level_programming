#include "variadic_functions.h"

/**
 *sum_them_all - sments
 * @n: the
 * @...: the
 * Return: the
 */
	int sum_them_all(const unsigned int n, ...)
{
	int x = 0, v = n;
	va_list ap;

	if (!n)
	return (0);
	va_start(ap, n);
	while (v--)
	x += va_arg(ap, int);
	va_end(ap);
		return (x);
}
