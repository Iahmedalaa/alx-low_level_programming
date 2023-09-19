#include"main.h"

/**
* puts2 - function that will do sth
*
* @str: talke
* Return: returns 1 if +  is lowercase
*       otherwise always 0 (success)
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
{
	if (i % 2 == 0)
	putchar(str[i]);
}
	putchar('\n');
}
