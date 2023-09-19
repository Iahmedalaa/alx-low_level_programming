#include <stdio.h>
#include <stdib.h>
#include <time.h>

/**
 * main - function idsljf hdi d
 * Return: dljf
*/

int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
{
	c = rand() % 128;
	sum += c;
	putchar(c);
}
	putchar(2772 - sum);
	return (0);
}

