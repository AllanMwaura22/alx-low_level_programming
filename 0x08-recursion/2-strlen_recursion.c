#include "main.h"
/**
 * _strlen_recursion - Returns the length of a given str.
 * @s: The string to be tested.
 *
 * Return: The length of the str.
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
