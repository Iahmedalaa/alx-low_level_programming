#include"main.h"

/**
* puts_half - function that will do sth
*
* @str: talke
* Return: returns 1 if +  is lowercase
*       otherwise always 0 (success)
*/

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	;
	for (i /= 2; str[i] != '\0'; i++)
{
	putchar(str[i]);
}
	putchar('\n');
}
