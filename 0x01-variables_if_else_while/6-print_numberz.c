#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - entry point
*
* Description: show alphapet
*
* Return: 0 (success)
*
*/

int main(void)
{
int digit = 0;
	while (digit <= 9)
{
		putchar(digit + '0');
		digit++;
}
	putchar('\n');

	return (0);
}
