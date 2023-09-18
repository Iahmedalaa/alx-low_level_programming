#include"main.h"

/**
* swap_int - function that will do sth
*
* @a: takes intger
* @b: talke
* Return: returns 1 if +  is lowercase
*       otherwise always 0 (success)
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;

	*a = *b;
	*b = tmp;
}
