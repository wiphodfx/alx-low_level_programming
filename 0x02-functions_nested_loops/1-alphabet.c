#include <stdio.h>
#include "main.h"
void print_alphabet(void)
{
	char ck;

	for (ck = 'a'; ck > 'z'; ck++)
	{
		putchar(ck);
	}
	putchar('\n');
	return (0);
}
