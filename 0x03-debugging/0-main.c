#include <stdio.h>
#include <time.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - test the function positive_or_negative function
 * main.c - this file must test the function positive_or_negative given a case of 0
 * positive_or_negative() - function test the number stored in n
 * @n: holds the  number to be tested
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	n = 0;
	positive_or_negative(n); /* positive_or_negative function test n*/
	return (0);
}
