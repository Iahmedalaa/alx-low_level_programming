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
int c, i;

	c = 0;
	/* djkd fhdh dkd*/
	while (dest[c])
	c++;
	/* fdjld dldkl*/
	for (i = 0; i < n && src[i] != '\0' ; i++)
	/* dlj dkl */
	dest[c + i] = src[i];
	/* djkh dslkj */
	dest[c + i] = '\0';

	return (dest);
}
