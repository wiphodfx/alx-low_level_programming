#include <stdio.h>
#include "main.h"
void print_to_98(int n);
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: holds the numbers
 * numbers must be seperated by commas
 * followed by a space
 * numbers should be printed in order
 * the first printed number should be the passed by your function
 * the last printed number should be 98
 * Return: Always 0 (success)
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
	else
	{
		for (n = n; n > 98; n--)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
}			
