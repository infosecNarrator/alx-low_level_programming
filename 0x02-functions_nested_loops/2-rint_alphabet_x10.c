#include "main.h"

/*
 * print_lphabet_x10 - prints the alpabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;

	for (i=0; i <10; i ++)
	{
		char c;
		for (c = 'a'; c <='z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
