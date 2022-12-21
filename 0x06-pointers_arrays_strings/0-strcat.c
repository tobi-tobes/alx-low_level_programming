#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: pointer to resulting appended string
 * @src: pointer to string to be appended to dest
 *
 * Return: appended dest string
 */
char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
