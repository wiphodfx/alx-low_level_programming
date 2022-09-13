#include <stdio.h>
#include "main.h"
void jack_bauer(void);
/**
 * jac_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 * Return: Alway 0 (success)
 */
void jack_bauer(void)
{
	int i;
	int k;

	for (i = 0; i <= 23; i++)
	{
		for (k = 0; k <= 59; k++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(k / 10 + '0');
			_putchar(k % 10 +'0');
			_putchar('\n');
		}
	}
}
