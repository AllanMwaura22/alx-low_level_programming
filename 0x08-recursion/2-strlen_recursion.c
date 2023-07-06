#include "main.h"
/**
 * _strlen_recursion – This Returns the length of a str.
 * @s: The str to be measured.
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
