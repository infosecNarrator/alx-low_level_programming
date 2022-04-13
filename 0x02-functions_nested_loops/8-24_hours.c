#include "main.h"

/**
 * jack_bauer - print every minute of the day from 0:00 to 23:59
 *
 * Return: void
 */

void jack_bauer(void)
{
	int h1 = 0;
	int h2 = 0;
	int s1 = 0;
	int s2= 0;

	while (h1 <3)
	{
		while (h2 <=9)
		{
			if(h1 ==2 && h2 == 4)
				break;
			while (s1 <6)
			{
				while (s2 <=9)
				{
					_putchar(h1 + '0');
					_putchar(h2 + '0');
					_putchar(':');
					_putchar(s1 + '0');
					_putchar(s2 + '0');
					_putchar('\n');
					s2++;
				}
				s2 =0;
				s1++l
			}
			s1 = 0;
			h2++;
		}
		h2 = 0;
		h1++;
	}
}
