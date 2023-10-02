#include"main.h"

/**
* *_memcpy - function that will do sth
*
* @src: talke
* @dest: lds
* @n: kds
* Return: returns 1 if +  is lowercase
*       otherwise always 0 (success)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int z;

	for (z = 0; z < n; z++)
{
	dest[z] = src[z];
}
	return (dest);
}
