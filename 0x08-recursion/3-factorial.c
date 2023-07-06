#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: Number to get the factorial from
 *
 * Return: factorial of number n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
