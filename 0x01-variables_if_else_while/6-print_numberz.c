#include <stdio.h>
#include <stdlib.h>
/**
 *  main- prints all single digits of base 10 starting from 0
 *  followed by a newline
 *  Return: always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
