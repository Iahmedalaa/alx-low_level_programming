#include <stdlib.h>
#include <time.h>

/**
* main - entry point
*
* Description: see if number is greater than 5 or smaller than 6
*
* Return: 0 (success)
*/
int main(void)
{
int n;

srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
	printf("Last digit of %i is %i and is greater than 5", n, n % 10);
	if (n % 10 == 0)
	printf("Last digit of %i is %i and is 0", n, n % 10);
	if (n % 10 < 6 && n % 10 != 0)
	printf("Last digit of %i is %i  and is less than 6 and not 0", n, n % 10);

	/* your code goes there */
	return (0);
}

