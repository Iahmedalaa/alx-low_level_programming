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
	putchar(43);
	return (1);
	if (n == 0)
	putchar(48);
	return (0);
	if (n < 0)
	putchar(45);
	return (-1);


}
