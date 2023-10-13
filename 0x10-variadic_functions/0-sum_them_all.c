#include "variadic_functions.h"
/**
 * sum_them_all - jdll
 * @n:jkds
 * @...: teh
 * Return: sld
 */

int sum_them_all(const unsigned int n, ...)
{
	int s = 0, i = n;
	va_list ap;

	if (!n)
	va_start(ap, n);
	while (i--)
		s = s + va_arg(ap, int);
	va_end(ap);
	return (s);
}
