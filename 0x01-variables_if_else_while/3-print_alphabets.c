#include <stdlib.h>
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
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
	putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(ch);
		CH++;
	}
	putchar('\n');

	return (0);
}
