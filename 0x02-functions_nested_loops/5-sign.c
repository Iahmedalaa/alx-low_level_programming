#include"main.h"

/**
* print_sign - function that will do sth
*
* @n: takes intger
*
* Return: returns 1 if +  is lowercase
*       otherwise always 0 (success)
*/

int print_sign(int n)
{
	if (n > 0)
{
	_putchar(43);
	return (1);
}
	else if (n == 0)
{
	_putchar(48);
	return (0);
}
	else
{
	_putchar(45);
	return (-1);
}

}
