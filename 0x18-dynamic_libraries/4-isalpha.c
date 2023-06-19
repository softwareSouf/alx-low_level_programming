#include "main.h"

/**
 * _isalpha  - check if c is alpha
 * @c: the character
 *
 * Return: 0 if it's not lowercase return 1 if its is
 */
int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
