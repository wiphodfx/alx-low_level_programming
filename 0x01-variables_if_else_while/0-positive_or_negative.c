#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*Main function for execution of program*/
int main(void) /*This is the main function of the program*/
{	/*Entry point of main function*/
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2; /*Random number generator*/
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}		
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
