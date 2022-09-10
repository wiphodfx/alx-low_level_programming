#include <stdio.h>
#include <stdlib.h>
/**
 *  main- prints all single digits of base 10 starting from 0
 *  followed by a newline
 *  Return: always 0 (success)
 */
int main(void)
{
	int i = 0;

	while (i < 10);
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
