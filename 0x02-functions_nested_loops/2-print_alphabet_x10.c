#include <stdlib.h>
#include"main.h"
#include <time.h>
#include <stdio.h>

/**
* main - entry point
*
* Description: show alphapet
*
* Return: 0 (success)
*/
int main(void)
{
	void print_alphabet_x10(void);
	print_alphabet_x10();

	return (0);
}
	void print_alphabet_x10(void)
{
	int i;
	char ch;

	for (i = 0; i < 10; i++)

{
	ch = 'a';
	while (ch <= 'z')
{
	putchar (ch);
	ch++;
}
	putchar('\n');
}

}