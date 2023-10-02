#include"main.h"

/**
* _strcmp - function that will do sth
*
* @s1: takes intger
* @s2: talke
* Return: returns 1 if +  is lowercase
*       otherwise always 0 (success)
*/

int _strcmp(char *s1, char *s2)
{
int equal = 0;
	while (*s1)
{
	if (*s1 != *s2)
{
	equal = ((int)*s1 - 48) - ((int)*s2 - 48);
	break;
}
	s1++;
	s2++;
}

	return (equal);
}
