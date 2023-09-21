#include"main.h"

/**
* *string_toupper - function that will do sth
*
* @' ': talke
* Return: returns 1 if +  is lowercase
*       otherwise always 0 (success)
*/

char *string_toupper(char *)
{
	int i;

	for (i = 0; str[i] != '\0''; i++)
{
	if (str[i] >= 97 && str[i] <= 122)
{
	str[i] = str[i] - 32;
}
}
	return (str);
}
