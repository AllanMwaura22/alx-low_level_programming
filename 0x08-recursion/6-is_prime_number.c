#include "main.h"

int actual_prime(int n, int i);

/**
 *Function is_prime_number – determines if an integer is a prime number or not
 * @n: number to test
 *
 * 1 is returned if the int is prime and 0 if the int is not prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * Function actual_prime - calculates if a number is prime recursively
 * @n: number to test
 * @i: iterator
 *
 *1 is returned if the number is prime and 0 if the number is not 
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
