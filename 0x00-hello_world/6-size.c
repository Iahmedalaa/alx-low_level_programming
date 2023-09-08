#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : A c programm that prints with put function
 * return : always 0 (success)
*/

int main(void)
{
	printf("The size of char is: %ld byte(s)\n", sizeof(char));
	printf("The size of int is: %ld byte(s)\n", sizeof(int));
	printf("The size of long int is: %ld byte(s)\n", sizeof(long int));
	printf("The size of long long is: %ld byte(s)\n", sizeof(long long));
	printf("The size of long long int is: %ld byte(s)\n", sizeof(long long int));
	printf("The size of float is: %ld byte(s)\n", sizeof(float));
	return (0);
}
