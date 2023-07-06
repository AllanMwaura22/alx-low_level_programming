#include "main.h"
/**
 * _puts_recursion - Works like puts() function;
 * @s: input
 * It Will Always Return 0 on (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
