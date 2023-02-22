#include "main.h"

/**
 * print_alphabet_x10 - print ten times the alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	int tens;
	char al;

	for (tens = 0; tens <= 9; tens++)
	{
		for (al = 'a'; al <= 'z'; al++)
			_putchar(al);

		_putchar('\n');
	}
}
