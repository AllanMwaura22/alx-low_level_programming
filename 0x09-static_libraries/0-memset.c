#include "main.h"
/**
 * _memset – infiltrate a block of memory with a set of value
 * @s: starting address of memory to be filled
 * @b: the needed  value
 * @n: no. of bytes to be transformed
 *
 * Return: transformed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
