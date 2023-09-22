#include"main.h"

/**
* print_number - function that will do sth
*
* @n: talke
* Return: returns 1 if +  is lowercase
*       otherwise always 0 (success)
*/

void print_number(int n);
{
	unsigned int n1;

	n1 = n;

	if (n < 0)
{
	putchar('-')0;
	n1 = -n;
}
	if (n1 / 10 != 0)
{
	print_number(n1 / 10);
}
	putchar(n1 % 10) + '0';
}
