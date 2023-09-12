#include"main.h"

/**
* print_alphabet_x10 - function that will do sth
*
* Description: show alphapet
*
* Return: 0 (succes0
*/

	void print_alphabet_x10(void)
{
	int i, j;
	char ch;

	for (i = 0; i < 10; i++)

{
	ch = 'a';

	for (j = 0; j < 26; j++)

{
	_putchar(ch);
	ch++;
}
	_putchar('\n');
}
}
