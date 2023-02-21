#include "main.h"
#include <unistd.h>
/**
*_putchar -  print the character c
*description - incremant char with while function
*
*Return: 0
*on error 
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
