#include <stdio.h>

/**
 * main- The entry point
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
