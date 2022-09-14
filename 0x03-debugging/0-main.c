#include <stdio.h>
#include <time.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - test the function positive_or_negative function
 * 0-main.c - test that the function positive_or_negative function
 * positive_or_negative - function test the number stored in n
 * @n: stores the number from the Rand() loop calculation
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	positive_or_negative(n);
	return (0);
}
