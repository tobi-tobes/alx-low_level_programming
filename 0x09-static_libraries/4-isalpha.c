#include <unistd.h>
#include <ctype.h>

/**
 * _isalpha - returns 1 if c is a letter, lowercase or uppercase.
 * @c: The character to put in the function.
 *
 * Return: On success 1.
 * On error, 0 is returned.
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
