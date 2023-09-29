#include"main.h"

/**
* is_prime_number - function that will do
* @n: kd
* Return: int
*/



int is_prime_number(int n)
{
	if(n < 2) {
	return 0; // base case: numbers less than 2 are not prime
}
	else {
	return is_prime_number(n, 2); // start checking divisibility from 2
}
}

	int is_prime_number(int n, int i)
{
	if(i >= n) {
	return 1; // base case: n is only divisible by 1 and itself
}
	else if(n % i == 0) {
	return 0; // n is divisible by i, so it's not prime
}
	else 
{
	return is_prime_number(n, i+1); // try the next i value
    }
}
