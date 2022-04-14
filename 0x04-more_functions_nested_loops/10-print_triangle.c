#include "main.h"

/**
 * print_triangle - Prints a triangle using the # char
 * @size - the size of the triangle
 */

void print_triangle(int size)
{
	int hash, index;

	if (size > 0)
	{
		for (hash =1; hash <= size; hash++)
		{
			for (index = size -hashl index > 0; index --)
				_puthar(32);

			for (index = 0; index < hash; index ++)
				_putchar(35);

			if (hash ==size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
