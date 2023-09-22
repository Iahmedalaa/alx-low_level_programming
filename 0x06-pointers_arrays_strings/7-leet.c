#include"main.h"

/**
* leet - function that will do sth
*
* @c: talke
* Return: returns 1 if +  is lowercase
*       otherwise always 0 (success)
*/

char *leet(char *c)
{
	char *cp = c;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int vlaue[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*c)
{
	for (i = 0; i < sizeof(key) / sizeof(char); i++)
{
	if (*c == key[i] || *c == key[i] + 32)
{
	*c = 48 + vlaue[i];
}
}
	c++;
}
	return (cp);
}
