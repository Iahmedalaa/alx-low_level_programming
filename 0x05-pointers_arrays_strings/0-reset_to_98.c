#include"main.h"

/**
* reset_to_98 - function that will do sth
*
* @n: takes intger
*
* Return: returns 1 if +  is lowercase
*       otherwise always 0 (success)
*/

void reset_to_98(int *n)
{
	int n = 402;
	int *ptr;
	ptr= &n;
	putchar(n);
	*ptr = 98;
	putchar(n);

}
