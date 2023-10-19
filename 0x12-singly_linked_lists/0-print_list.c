#include "lists.h"

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
		printf("[%d] %s\n", strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		z++;
	}
	return (z);
}
