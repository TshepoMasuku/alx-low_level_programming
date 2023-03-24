#include <stdio.h>

/**
 * main- The Entry Point
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	int d1;
	int d2;

	for (d1 = 0; d1 <= 8 ; d1++)
	{
		for (d2 = 1; d2 <= 9; d2++)
		{
			if (d2 > d1)
			{
				putchar(d1 + '0');
				putchar(d2 + '0');
				if (d1 != 8 || d2 != 9)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
