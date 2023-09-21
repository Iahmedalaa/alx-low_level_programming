#include"main.h"

/**
* *_strncat - function that will do sth
*
* @src: takes intger
* @n: talke
* @dest: dfkjl
* Return: returns 1 if +  is lowercase
*       otherwise always 0 (success)
*/

char *_strncat(char *dest, char *src, int n)
{
int c, c2;

	c = 0;
	while (dest[c])
	c++;
	for (c2 = 0; src[c2] ; c2++)
	dest[c++] = src[c2];

	return (dest);
}
