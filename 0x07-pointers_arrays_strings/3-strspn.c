#include"main.h"

/**
* _strspn - function that will do
* @accept: lds
* @s: kds
* Return: returns 1 if +  is lowercase
*       otherwise always 0 (success)
*/

unsigned int _strspn(char *s, char *accept)
{
	int z, x;

	for (z = 0; s[z] != '\0'; z++)
{
	for (x = 0; accept[x] != s[z]; x++)
{
	if (accept[x] == '\0')
	return (z);

}
}
	return (z);
}
