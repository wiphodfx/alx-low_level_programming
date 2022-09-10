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

	for (i = 45; i <= 56; i++)
	{
		for (j = 46; j <= 57; j++)
		{
			for (k = 47; k <= 58; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i > k && k > j)
				{
					if (i != 55 && k != 56 && j != 57)
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
