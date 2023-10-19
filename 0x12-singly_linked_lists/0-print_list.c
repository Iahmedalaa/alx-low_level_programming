#include "lists.h"

/**
* _strlen - check the code for The school students.
* @s: the number of ar
* Return: size
*/

int _strlen(char *s)
{
	int z = 0;

	if (!s)
		return (0);
	while (*s++)
		z++;
	return (z);
}

/**
* print_list - check the code for The school students.
* @h: the number of ar
* Return: size
*/


size_t print_list(const list_t *h)
{
	size_t z = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		z++;
	}
	return (z);
}
