#include <unistd.h>
#include <ctype.h>

/**
 * _islower(int c): returns 1 if lowercase and 0 otherwise
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
