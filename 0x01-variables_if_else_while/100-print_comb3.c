#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all possible different combinations of two digits
 * seperated by , and a space
 * 01 and 10 are considered the same
 * prints only the smallest combination of the two digits
 * numbers printed in ascending order
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	int k;

	for (i = 48; i < 58; i++)
	{
		for (k = 49; k < 59; k++)
		{
			if (k > i)
			{
				putchar(i);
				putchar(k);
				if (i != 56 || k != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
