#include "main.h"

/** 
 * print_line - draws straight line on terminal
 *
 * @n - times the _ should be printed
 *
 * Return: empty
 */

void print_line(int n)
{
	int i;

	if (n <=0)
	{
		_putchar('\n');
	}
	else
	{
		for (i=0; i < n ; i ++)
		{
			_putchar(95);
		}

		_putchar('\n');
	}
}
