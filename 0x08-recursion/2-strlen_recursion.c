#include"main.h"

/**
* _strlen_recursion - function that will do
* @s: kds
* Return: int
*/

int _strlen_recursion(char *s)
{
	int i;

	if (*s > '\0')
{
	i = i + _strlen_recursion(s + 1) + 1;
}
	return (i);
}
