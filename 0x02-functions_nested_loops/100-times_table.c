#include "main.h"

/**
 * print_times_table - prints the n more than one time
 * @n: the number of table times
 */
void print_times_table(int n)
{
	int Num, mul, spur;

	if (n >= 0 && n <= 15)
	{
		for (Num = 0; Num <= n; Num++)
		{
			_putchar('0');

			for (mul = 1; mul <= n; mul++)
			{
				_putchar(',');
				_putchar(' ');

				spur = Num * mul;

				if (spur <= 99)
					_putchar(' ');
				if (spur <= 9)
					_putchar(' ');
				if (spur >= 100)
				{
					_putchar((spur / 100) + '0');
					_putchar(((spur / 10)) % 10 + '0');
				} else if (spur <= 99 && spur >= 10)
				{
					_putchar((spur / 10) + '0');
				}
			_putchar((spur % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
