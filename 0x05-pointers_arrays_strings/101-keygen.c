#include "main.h"
/*
 * main - generates random valid passwords for the 101-crackme program
 */
int main(void)
{
	char pass[84];
	int i =0, sum = 0, dh1, dh2;

	srand(time(0));

	while (sum < 2772)
	{
		pass[i] = 33 + rand() % 94;
		sum += pass[i++];
	}

	pass[i] = '\0';

	if (sum != 2772)
	{
		dh1 = (sum -2772) /2;
		dh2 = (sum -2772) /2;
		if ((sum -2772) % 2 !=0)
			dh1++;

		for ( i =0; pass[i]; i++)
		{
			if (pass[i] >= (33 + dh1)
					{
						pass[i] -= dh1;
						break;
					}
		}

		for (i = 0; pass[i]; i ++)
		{
			if (pass[i] >= (33 +dh2))
			{
				pass[i] -= dh2;
				break;
			}
		}
	}

	printf("%s", pass);

	return (0);
}
