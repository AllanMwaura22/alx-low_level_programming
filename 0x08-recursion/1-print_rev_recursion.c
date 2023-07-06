#include "main.h"
/**
 * _print_rev_recursion – This Will Print a str in reverse.
 * @s: The str to be printed.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
