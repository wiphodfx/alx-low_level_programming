#include <stdio.h>
#include <time.h>
#include "main.h"
#include <stdlib.h>
/**
 * main.c - test that the function positive_or_negative function
 * gives the correct output when given a case of 0
 * main - runs the loop to genate the numbers
 * positi_or_negative - function test the number stored in n
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
