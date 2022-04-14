#include "main.h"

/**
 * _isupper - checks for upper case chars
 *
 * @c: number to be checked
 *
 * Return 1 for upper, 0 for lower
 */

int _isupper(int c)
{
	if ( c >=65 && c <=90)
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
