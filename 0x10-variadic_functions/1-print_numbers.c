#include "variadic_functions.h"


/**
 * print_numbers - do sth dl.
 * @separator: dkd
 * @n: kd
 * @..: lds skl
 * Return: dsf d
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list ap;

	if (!n)
{
		printf("\n");
}
	va_start(ap, n);
	while (i--)
	printf("%d%s", va_arg(ap, int),
			i ? (separator ? separator : "") : "\n");
	va_end(ap);
}
