#include <stdio.h>
/**
*main -  Entry point
*description - print sizeof data types in c
*
*Return: 0
*/
int main(void)
{
	printf("Size of a char: %i bytte(s)\n", sizeof(char));
	printf("Size of an int: %i bytte(s)\n", sizeof(int));
	printf("Size of a long int: %i bytte(s)\n", sizeof(long int));
	printf("Size of a long long int: %i byte(s)\n", sizeof(long long int));
	printf("Size of a float: %i byte(s)\n", sizeof(float));
	return (0);
}
