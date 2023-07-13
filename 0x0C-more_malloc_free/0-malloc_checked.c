#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates mem using memory allocation(malloc)
 * @b: no of bytes to alloc
 *
 * Return: a pointer to the alloc mem
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
