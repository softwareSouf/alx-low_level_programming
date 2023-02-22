#include "main.h"

/**
 * print_last_digit - print the last digit
 * @n: the int
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int la = n % 10;

	if (n < 0)
		n= -n;

	if (la < 0)
		la = -1;

	_putchar(la + '0');

	return (0);
}
