#include "main.h"

/**
 * _strcpy - copies a string pointed to by @src, including the terminating
 * null byte, to a buffer pointed to by @dest/
 * @src: The source string to copy
 * @dest: A buffer to copy the string to.
 *
 * Return: A pointer to the destination string @dest.
 */

char *_strcpy(char *dest, const char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
