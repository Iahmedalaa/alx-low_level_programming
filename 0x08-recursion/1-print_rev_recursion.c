#include"main.h"

/**
* _print_rev_recursion - function that will do
* @s: kds
*/

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
{
	putchar (*s);
	putchar (s + 1);
}
}
