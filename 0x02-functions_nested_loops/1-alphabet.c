#include <stdio.h>
#include "main.h"
void print_alphabet()
{
	char ck;

	for (ck = 'a'; ck > 'z'; ck++)
	{
		putchar(ck);
	}
	putchar('\n');
	return;
}
