#include "main.h"

/**
 * times_table - print 9 time table
 */
void times_table(void)
{
	int Num, mul, spur;

	for (Num = 0; Num <= 9; Num++)
	{
		_putchar('0');

		for (mul = 1; mul <= 9; mul++)
		{
			_putchar(',');
			_putchar(' ');

			spur = Num + mul;

			if (spur <= 9)
				_putchar(' ');
			else
				_putchar((spur / 10) + '0');
				_putchar((spur % 10) + '0');
		}
		_putchar('\n');
	}
}
