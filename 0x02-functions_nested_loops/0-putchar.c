#include "main.h"

/**
 * main - Print _putchar
 *
 * Return : 0 (success)
 */

int main(void)
{
	int i =0;
	char namae[] = "_putchar";
	
	while (i< 9)
	{
		_putchar(namae[i]);
		i++;
	}
	_putchar('\n');
	return 0;
}
