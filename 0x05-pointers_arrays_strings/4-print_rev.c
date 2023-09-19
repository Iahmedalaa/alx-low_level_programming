#include"main.h"

/**
* print_rev - function that will do sth
*
* @s: talke
* Return: returns 1 if +  is lowercase
*       otherwise always 0 (success)
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	i++;
	while (i--)
{
	putchar(s[i]);
}
	putchar('\n');
}
