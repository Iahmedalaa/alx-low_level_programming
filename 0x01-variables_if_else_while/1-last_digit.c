#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <sd>

/**
* main - entry point
*
* Description: see if number is greater than 5 or smaller than 6
*
* Return: 0 (success)
*/
int main(void)
{
	int n, num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	num = n % 10;

	if (num  > 5)
	printf("Last digit of %i is %i and is greater than 5", n, num);
	if (num  == 0)
	printf("Last digit of %i is %i and is 0", n, num);
	if (num < 6 && num != 0)
	printf("Last digit of %i is %i  and is less than 6 and not 0", n, num);

	/* your code goes there */
	return (0);
}

