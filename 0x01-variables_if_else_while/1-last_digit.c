#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-assigns a random number
 * to print the last digit
 * of the number stored in the variable n.
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5 || n == 0)
	{
		printf("Last digit of %d is 8 and is greater than 5\n", n);
	}
	if (n == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of %d is -8 and is less than 6 and not 0\n", n);
	}
	return (0);
}
