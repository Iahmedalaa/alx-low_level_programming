#include"main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_last_digit - function that will do sth
*
* @c: takes ascii
*
* Return: returns 1 if `c` is lowercase
*       otherwise always 0 (success)
*/

	int print_last_digit(int c)
{
	int lastdigit
	if (c < 0)
	lastdigit = (-1) * (c % 10);
	else
	lastdigit = c % 10;

	_putchar(lastdigit +'0');
	return (lastdigit);

}
