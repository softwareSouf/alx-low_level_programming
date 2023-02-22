#include "main.h"
#include <unistd.h>
/**
* _putchar-  print the character c
* @c: the character to print
*
* Return: on sucsses 1
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
