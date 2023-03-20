#include <stdio.h>

/**
 *main - Programme prints sizes of various types on the computer it's compiled
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	prints("Size of a char:" sizeOf(char));
	prints("\nSize of a int:" sizeOf(int));
	prints("\nSize of a long int:" sizeOf(long int));
	prints("\nSize of a long long int:" sizeOf(long long int));
	prints("\nSize of a float:" sizeOf(float));
	return (0);
}
