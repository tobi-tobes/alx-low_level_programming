#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: point to array of arguments
 *
 *
 * Return: pointer to combined string if successful, otherwise NULL
 */
char *argstostr(int ac, char **av)
{
	int sum = 0, str = 0, el = 0, c;
	char *comb;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (str < ac)
	{
		while (av[str][el])
		{
			sum++;
			el++;
		}
		el = 0;
		str++;
	}

	comb = malloc((sizeof(char) * sum) + ac + 1);
	str = el = c = 0;

	while (str < ac)
	{
		while (av[str][el])
		{
			comb[c] = av[str][el];
			el++;
			c++;
		}
		el = 0;
		comb[c] = '\n';

		c++;
		str++;
	}
	comb[c] = '\0';

	return (comb);
}
