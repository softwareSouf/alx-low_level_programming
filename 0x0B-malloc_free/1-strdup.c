#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate string from pointer to an other
 * @str: the string will duplicate
 *
 * Description: duplicate string to new one
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	char *nst;
	int i, r = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	nst = malloc((i + 1) * sizeof(char));
	if (nst == NULL)
	{
		return (NULL);
	}

	for (r = 0; str[r]; r++)
	{
		nst[r] = str[r];
	}
	return (nst);
	free(str);
}
