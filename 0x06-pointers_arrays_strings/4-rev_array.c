#include"main.h"

/**
* reverse_array - function that will do sth
*
* @a: takes intger
* @n: talke
* Return: returns 1 if +  is lowercase
*       otherwise always 0 (success)
*/

void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0, j = (n - 1); i < j; i++, j--)
{
	t = a[i];
	a[i] = a[j];
	a[j] = t;
}
}
