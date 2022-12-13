#include <unistd.h>
#include <ctype.h>

/**
 * _islower: returns 1 if lowercase and 0 otherwise
 * @c: the character to check
 *
 * Return: On success 1.
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
