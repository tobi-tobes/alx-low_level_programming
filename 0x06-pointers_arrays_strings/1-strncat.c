#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings with at most n bytes from src
 * @dest: pointer to resulting appended string
 * @src: pointer to string to be appended to dest
 * @n: number of bytes of src to concatenate with dest
 *
 * Return: appended dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
