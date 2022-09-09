#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main assigns a random number
 * to the variable "n" each time it is executed
 * to print the last digit of the number stored in the
 * variable n.
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of %d is 8 and is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	else
	{
		printf("Last digit of %d is -8 and is less than 6 and not 0\n", n);
	}
	return (0);
}
