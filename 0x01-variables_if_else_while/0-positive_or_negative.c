#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Description : A c programm that print whether number is positve or negative
 * /
* betty style doc for function main goes there
* Return : Always (0(success)
* Return: 0 on success, non-zero on errors
*/
int main(void)
{
	int n;

	srand(time(0));


n = rand() - RAND_MAX / 2;


	if (n > 0)
	printf("%i is positive \n", n);
	else if (n == 0)
	printf("%i is zero\n", n);
	else if (n < 0)
	printf("%i is negative\n", n);


    /* your code goes there */
	return (0);
}
