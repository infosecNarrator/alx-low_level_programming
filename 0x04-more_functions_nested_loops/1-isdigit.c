#include "main.h"

/**
 * _isdigit - checks for numbers
 *
 * #c: char to be checked
 * Return 1 for number 0 otherwise
 */

int _isdigit(int c)
{
	if (c >=48 && c <=57)
		return 1;
	else
		return 0;
}
