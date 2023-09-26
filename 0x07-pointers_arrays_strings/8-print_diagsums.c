#include"main.h"
#include<stdio.h>

/**
* print_diagsums - function that will do
* @a: kds
* @size: dl
* Return: returns 1 if +  is lowercase
*       otherwise always 0 (success)
*/

void print_diagsums(int *a, int size)
{
int i, sum1 = 0, sum2 = 0;

	/* iterate over the main diagonal */
	for (i = 0; i < size; i++)
{
	sum1 += a[i * size + i];
}

	/* iterate over the secondary diagonal */
	for (i = 0; i < size; i++)
{
	sum2 += a[(i + 1) * size - (i + 1)];
}

	printf("Sum of main diagonal: %d\n", sum1);
	printf("Sum of secondary diagonal: %d\n", sum2);
}
