#include"main.h"

/**
* print_array - function that will do sth
*
* @a: talke
* @n: dkl
* Return: returns 1 if +  is lowercase
*       otherwise always 0 (success)
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
{
	if (i != (n - 1))
	printf("&d, ", a[i]);
	else
	printf("&d", a[i]);
}
	printf("\n");
}
