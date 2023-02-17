#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main -  Entry point
*description - incremant char with while function
*
*Return: 0
*/
int main(void)
{

	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
