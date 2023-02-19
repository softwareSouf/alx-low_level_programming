#include <stdio.h>
/**
*main -  Entry point
*description - print sizeof data types in c
*
*Return: 0
*/
int main(void)
{
	printf("Size of a char: %lu bytte(s)\n", sizeof(char));
	printf("Size of an int: %lu bytte(s)\n", sizeof(int));
	printf("Size of a long int: %lu bytte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
