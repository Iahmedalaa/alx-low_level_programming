#include"main.h"

/**
* _puts - function that will do sth
*
* @str: talke
* Return: returns 1 if +  is lowercase
*       otherwise always 0 (success)
*/

void _puts(char *str)
{
	while (*str != '\0')
{
	putchar(*str + 0);
	str++;
}
	putchar('\n');
}
