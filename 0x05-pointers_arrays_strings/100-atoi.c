#include "main.h"
/**
 * _atoi - converts a string to an int
 * @s: the string to be converted.
 *
 * Return - the int value of the converted string.
 */

int _atoi(char *s)
{
	int op = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9' )
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;
	} while (*s++);

	return (num * op);

}
