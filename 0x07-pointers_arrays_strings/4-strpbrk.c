#include"main.h"

/**
* *_strpbrk - function that will do
* @accept: lds
* @s: kds
* Return: returns 1 if +  is lowercase
*       otherwise always 0 (success)
*/

char *_strpbrk(char *s, char *accept)
{
	int z, x;
	char *p;
	int z = 0;

	while (s[z] != '\0')
{
	int x = 0;
	while (accept[x] != '\0')
{
	if (accept[x] == s[z])
{
	p = &s[z];
	return (p);
}
	x++;
}
	z++;
}
	return (p);
}
