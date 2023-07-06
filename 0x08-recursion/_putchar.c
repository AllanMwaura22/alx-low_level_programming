#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writes  char c to stdout
 * @c: The char to print
 *
 * Return: If On success 1.
 * If there is an error, -1 is returned, and errno is set suitably.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
