#include "main.h"

/**
 * print_array - Prints the input # of elements of an array of ints
 * @a - the array of ints
 * @n - the # of elements to be printed
 */
 
void print_array(int *a, int n)
{
	int i;

	for (i =0; i < n; i ++)
	{
		printf("%d", a[i]);

		if (i == n -1)
			continue;

		printf(",");
	}

	printf("\n");
}
