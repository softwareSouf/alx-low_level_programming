#include "main.h"

/**
 * print_times_table - prints the n more than one time
 * @n: the number of table times
 */
void print_times_table(int n)
{
	int m, l, k;

	if (n >= 0 && n <= 15)
	{
		for (m = 0; m <= n; m++)
		{
			for (l = 0; l <= n; l++)
			{
				k = l * m;
				if (l == 0)
				{
					_putchar(k + '0');
				} else if (k < 10 && l != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				} else if (k >= 10 && k < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				} else if (k >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((k / 100) + '0');
					_putchar(((k / 10) % 10) + '0');
					_putchar((k % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}

