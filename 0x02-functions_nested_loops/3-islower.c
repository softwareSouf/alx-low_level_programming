#include "main.h"

/**
 * _islower  - check if the alpha is lower
 * @c: the character
 *
 * Return: 0 if it's not lowercase return 1 if its is
 */
int _islower(int c)
{
	char C;

	if (C >= 'a' && C <= 'z')
		return (1);
	else
		return (0);
}
