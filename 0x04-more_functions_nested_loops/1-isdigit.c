#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks if a character is a digit.
 * @c: The character to check
 *
 * Return: 1 if a digit, 0 if not
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
