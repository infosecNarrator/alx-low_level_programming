#include "main.h"
#include <stdio.h>

/**
 * main - prints first 50 fib numbers
 * .
 *
 */
int main(void)
{
	int a,b;
	long c,d,nx;

	c = 1;
	d =2;
	b =50;

	for ( a =0; a < b; a ++)
	{
		if ( a == 49)
			printf("%lu, ",c);
		else
		{
		printf("%lu, ",c);
		nx = c + d;
		c =d;
		d =nx;
		}
	}
	printf("\n");
	return (0);
}
