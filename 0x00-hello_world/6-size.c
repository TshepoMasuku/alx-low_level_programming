#include <stdio.h>

/**
 *main - Programme prints sizes of various types on the computer it's compiled
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char:", sizeof(char));
	printf("\nSize of a int:", sizeof(int));
	printf("\nSize of a long int:", sizeof(long int));
	printf("\nSize of a long long int:", sizeof(long long int));
	printf("\nSize of a float:", sizeof(float));
	return (0);
}
