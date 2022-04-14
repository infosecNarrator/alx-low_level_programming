#include "main.h"

/**
 * largest number -returns the largest of 3 numbers
 * @a: int 1
 * @b: int 2
 * @c: int 3
 * Return: largest int
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if(a>b && a>c)
	{
		largest = a;
	}
	else if (a>b && c >a)
	{
		largest = c;
	}
	else if (b > c && c > a)
	{
		largest = b;
	}
	else 
	{
		largest =c;
	}

	return largest;
}
