#include "lists.h"

/**
* free_list - check the code for The school students.
* @head: the number of args
* Return: Always 0.
*/

void free_list(list_t *head)
{
	list_t *node, *next_node;

	if (!head)
		return;
	node = head;
	while (node)
	{
		next_node = node->next;
		free(node->str);
		free(node);
		node = next_node;
}
}
