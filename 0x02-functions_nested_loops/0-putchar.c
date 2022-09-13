#include <stdio.h>
#include "main.h"
int _putchar();
/**
 * a program that prints _putchar
 * followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	_putchar();
}
int _putchar() /* _putchar function - prototype functionn*/
{
	int i = 0;
	while(i < 5)
	{
		putchar(i);
		i = i + 1;
	}
	putchar('\n');
	return (0);
}
