#include <unistd.h> 
 
/** 
 * _putchar - Writes  char C to STDOUT
 * @c: The char to print 
 * 
 * Return: On success 1. 
 * On error, -1 is returned, and errno set appropriately. 
 */ 
int _putchar(char c) 
{ 
 return (write(1, &c, 1)); 
}
