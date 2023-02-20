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

	int Onum;
	int tnum;

	for (tnum = 0; tnum <= 9; tnum++)
	{
		for (Onum = tnum + 1; Onum <= 9; Onum++)
		{
			putchar(tnum + '0');
			putchar(Onum + '0');
			if (tnum < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
