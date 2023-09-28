#include"main.h"

/**
* factorial - function that will do
* @n: kds
* Return: int
*/

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else
{
	return (n * factorial(n - 1));
}
}
