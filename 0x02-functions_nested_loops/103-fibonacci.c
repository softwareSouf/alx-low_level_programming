#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	int k;
	unsigned long int l, m, next, sum;

	l = 1;
	m = 2;
	sum = 0;

	for (k = 1; k <= 33; ++k)
	{
		if (l < 4000000 && (l % 2) == 0)
		{
			sum = sum + l;
		}
		next = l + m;
		l = m;
		m = next;
	}

	printf("%lu\n", sum);

	return (0);
}
