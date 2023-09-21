#include"main.h"

/**
* *_strncpy - function that will do sth
*
* @src: takes intger
* @n: talke
* @dest: dfkjl
* Return: returns 1 if +  is lowercase
*       otherwise always 0 (success)
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;

	/* djkd fhdh dkd*/

	for (i = 0; i < n && src[i] != '\0' ; i++)
	/* dlj dkl */
	dest[i] = src[i];
	/* djkh dslkj */
	while (i < n)
{
	dest[i] = '\0';
	i++;
}

	return (dest);
}
