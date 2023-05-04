#include "main.h"
/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index bit
 *
 * Return: value bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value_bit;

	if (index > 63)
		return (-1);

	value_bit = (n >> index) & 1;

	return (value_bit);
}
