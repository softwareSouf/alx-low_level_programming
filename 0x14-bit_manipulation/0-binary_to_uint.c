#include "main.h"
/**
 * binary_to_uint - converts a binary num to unsigned int
 * @b: str containing the binary num
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int decimal_v = 0;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		decimal_v = 2 * decimal_v + (b[j] - '0');
	}

	return (decimal_v);
}

