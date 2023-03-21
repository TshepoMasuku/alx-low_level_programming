#include <stdio.h>

/**
 *main - Programme prints sizes of various types on the computer it's compiled
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	float f;
	int i;
	long int li;
	long long int lli;

	printf("Size of a char:%ld byte(s)", Sizeof(char));
	printf("\nSize of a int:%ld byte(s)", Sizeof(int));
	printf("\nSize of a long int:%ld byte(s)", Sizeof(long int));
	printf("\nSize of a long long int:%ld byte(s)", Sizeof(long long int));
	printf("\nSize of a float:%ld byte(s)", Sizeof(float));
	return (0);
}
