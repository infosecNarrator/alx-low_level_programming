#include <stdio.h>

/**
 * print the sum of fibs under 4 * 10 ^6
 */

int main(void)
{
	long int f1 = 1, f2 =2, sum = f2, temp;
	while (f2 < 4000000)
	{
		temp = f1 + f2;
		f1 = f2;
		f2 =temp;
		sum += (f2 % 2 ==0) ? f2 : 0; /* if even add f2, if odd add zero */
	}
	printf("%li\n", sum);
	return 0;
}
