#include "main.h"

/*
 * rev_string : reverses a string
 * @*s : the string to be reverse
 * return void
 */

void rev_string(char *s)
{
	int len = 0, i = 0;
	char ct;
	
	while (s[i++])
		len++;

	for (i = len - 1; i >= len; len--)
	{
		ct = s[i];
		s[i] = s[len -i -1];
		s[len - i -1] = ct;
	}
}
