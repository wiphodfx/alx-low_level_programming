#include <stdio.h>
#include <time.h>
#include "main.h"
#include <stdlib.h>
/**
 * main- test the function positive_or_negative function
 * gives the correct output when given a case of 0
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	srand(time(0));
	i = rand() - RAND_MAX / 2;

	int r = positive_or_negative(i);
	return (r);
}
