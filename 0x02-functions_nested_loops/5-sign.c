#include "main.h"

/**
 * print_sign  - prints sign of x number
 * @n: the number that rely to the sign will prented
 *
 * Return: 0 if n equal 0 return 1 if n greater than 0 return -1 if n less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
