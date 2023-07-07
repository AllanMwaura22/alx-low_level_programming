#include <unistd.h>


/**
 * _putchar - Outputs the char C to stdout
 * @c: The char to be printed
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set accordingly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
