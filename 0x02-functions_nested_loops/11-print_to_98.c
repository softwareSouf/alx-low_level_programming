#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print all natural numbers from n to 98
 * and followed by new line
 * @n: the number will print
 */
void print_to_98(int n)
{
	int k, l;

	if (n <= 98)
	{
		for (k = n; k <= 98; k++)
		{
			if (k != 98)
				printf("%d, ", k);
			else if (k == 98)
				printf("%d\n", k);
		}
	}else if (n >= 98)
	{
		for (l = n; l >= 98; l--)
		{
			if (l != 98)
				printf("%d, ", l);
			else if (l == 98)
				printf("%d\n", l);
		}
	}
}	
