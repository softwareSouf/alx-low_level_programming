#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	char *s;

	hash = "cisfun";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	hash = "Don't forget to tweet today";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	hash = "98";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	return (EXIT_SUCCESS);
}
