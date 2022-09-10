#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the alphabets in lowercase excepte for q and e
 * followed by a new line
 * Return: always 0 (success)
 */
int main(void)
{
	char ck = 'a';
	
	while (ck <= 'z')
	{
		if (ck != 'e' && ck != 'q')
		{
			putchar(ck);
		}
		ck++;
	}
	putchar('\n');
	return (0);
}

