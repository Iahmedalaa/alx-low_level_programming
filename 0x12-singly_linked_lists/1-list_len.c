#include "lists.h"

/**
* list_len - entry point
* @h: dkl
* Return: fdfsucces
*/

size_t list_len(const list_t *h)
{
	size_t b = 0;

	while (h)
	{
		h = h->next;
		b++;
	}
	return (b);
}
