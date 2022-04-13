#include "main.h"

/**
 *  print_last_digit - prints the last digit of a number
 *  Return: last digit of number
 */

int print_last_digit(int n)
{
	int ld;

	if (n < 0)
		ld = (n % 10) * -1;
	else
		ld = n % 10;
	_putchar(ld + '0');
	return(ld);

}
