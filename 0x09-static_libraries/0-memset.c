#include"main.h"

/**
* *_memset - function that will do sth
*
* @s: talke
* @b: lds
* @n: kds
* Return: returns 1 if +  is lowercase
*       otherwise always 0 (success)
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int z;

	for (z = 0; n > 0; z++, n--)
{
	s[z] = b;

}
	return (s);
}
