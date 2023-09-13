#include"main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* times_table - function that will do sth
*
*/

void times_table(void)
{
int num, mul, prod;

	for (num = 0; num <= 9; num++)
{
	_putchar(48);
	for (mul = 1; mul <= 9; mul++)
{
	_putchar(',');
	_putchar(' ');
	prod = num * mul;
	if (prod <= 9)
	_putcahar(' ');
	else
	_putchar((prod / 10) + 48);
	putchar((prod % 10) + 48);
}
	_putchar('\n');
}

}
