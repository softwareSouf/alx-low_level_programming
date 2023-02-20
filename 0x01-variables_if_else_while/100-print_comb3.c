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

	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
