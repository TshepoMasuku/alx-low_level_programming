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

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(li));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(lli));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
