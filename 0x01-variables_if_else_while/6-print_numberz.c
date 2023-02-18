#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main -  Entry point
*description - print all numbers base 10
*
*Return: 0
*/
int main(void)
{

	int a = 0;

	while (a < 10)
	{
		putchar(48 + a);
		a++;
	}
	putchar('\n');
	return (0);
}
