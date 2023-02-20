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

	int n;
	int l;

	for (n = 0; n < 100; n++)
	{
		for (l = 0; l < 100; l++)
		{
			if (l < n)
			{
				putchar(n / 10 + '0');
				putchar(n % 10 + '0');
				putchar(' ');
				putchar(l / 10 + '0');
				putchar(l % 10 + '0');
				if (n * 100 + l != 9899)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
