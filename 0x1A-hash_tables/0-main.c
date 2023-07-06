#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *hash;

	hash = hash_table_create(1024);
	printf("%p\n", (void *)hash);
	return (EXIT_SUCCESS);
}
