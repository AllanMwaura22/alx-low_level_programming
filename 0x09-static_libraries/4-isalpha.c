#include "main.h"

/**
 * _isalpha - tests for alphabetic character
 * @c: the char to be tested
 * Return: 1 if c is a letter, 0 if not
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
