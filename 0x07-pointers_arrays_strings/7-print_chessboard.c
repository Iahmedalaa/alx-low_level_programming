#include"main.h"

/**
* print_chessboard - function that will do
* @a: kds
* Return: returns 1 if +  is lowercase
*       otherwise always 0 (success)
*/

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
{
	for (j = 0; j < 8; j++)
{
	putchar(a[i][j]);
}
	putchar('\n');
}
}
