#include "main.h"
/**
 * _puts - display a str, followed by a new line, to stdout
 * @str: str to be  displayed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
