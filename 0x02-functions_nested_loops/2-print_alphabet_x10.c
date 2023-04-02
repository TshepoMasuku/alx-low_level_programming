#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - This programme prints the alphabet,
 * in lowercase, followed by a new line ten times.
 */

void print_alphabet_x10(void)
{
	char ch;
	int num;

	for (num = 1; num <= 10; num++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
		putchar('\n');
	}
}
