#include <stdio.h>
#include <time.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - test the function positive_or_negative function
 * 0-main.c - file test that the function positive_or_negative gives the right output
 * positive_or_negative() - function test the number stored in n
 * @n: holds the  number to be tested
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* positive_or_negative function test the value of n*/
	positive_or_negative(n);
	return (0);
}
