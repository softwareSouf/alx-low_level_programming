#include "main.h"
/**
 * flip_bits - counts the number of bits that will change
 * to get from one number to another
 * @n: first num
 * @m: second num
 *
 * Return: num of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, bit_count = 0;
	unsigned long int current_bit;
	unsigned long int exclusive_bits = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		current_bit = exclusive_bits >> i;
		if (current_bit & 1)
			bit_count++;
	}

	return (bit_count);
}
