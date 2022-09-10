#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all the posible combinations of three digits
 * separated by a , and space
 * followed by a newline
 * the three digits must be different
 * prints the smallest combination of the three digits
 * nubers should be printed in ascending order
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i < 58; i++)
	{
		for (j = 49; j < 58; j++)
		{
			for (k = 50; k < 58; k++)
			{
				if (k > j && j > i)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != 55 || j != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
