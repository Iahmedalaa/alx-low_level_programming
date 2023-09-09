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
        int num = 0;

        while (num <= 9)
{
	putchar('0');
        putchar(0num + '0');

        if (num != 9)
{
        putchar(',');
        putchar(' ');
}
        num++;
}
        putchar('\n');
