#include <stdlib.h>
#include "main.h"
/**
 * create_array - creating an array of pointer
 * @c: character that in the array
 * @size: size of array
 *
 * Description: creat array of size size and assign char c
 * Return: retun pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *arg;
	unsigned int i;

	arg = malloc(sizeof(char) * size);

	if (size == 0 || arg == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arg[i] = c;

	return (arg);

}
