#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion – This function returns the square root of a given number
 * @n: given number to calculate the sqrt of
 *
 * And return the resulting sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * Function actual_sqrt_recursion – will recurse to find the natural
 * sqrt of a given number
 * @n: number to calculate the sqrt of
 * @i: iterator
 *
 * Always return the resulting sqrt 
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
