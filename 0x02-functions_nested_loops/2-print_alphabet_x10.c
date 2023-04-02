#include <stdio.h>
#include "main.h"

/**
 * print_alphabet- This programme prints the alphabet,
 * in lowercase, followed by a new line.
 */

void print_alphabet_x10(void)
{
	char ch;
	int num;

	ch = 'a';
	num = 1;

	while (num <= 10)
	{
		while (ch <= 'z')
		{
			putchar(ch);
			ch++;
		}
		putchar('\n');
	}
}
