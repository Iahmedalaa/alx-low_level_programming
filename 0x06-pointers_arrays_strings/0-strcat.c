#include"main.h"
#include<stdio.h>

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
	/* djkd fhdh dkd*/
	while (dest[c])
	c++;
	/* fdjld dldkl*/
	for (c2 = 0; src[c2] ; c2++)
	/* dlj dkl */
	dest[c++] = src[c2];

	return (dest);
}
