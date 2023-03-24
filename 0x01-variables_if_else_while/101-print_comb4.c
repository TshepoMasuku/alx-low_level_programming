#include <stdio.h>

/**
 * main- Entry Point
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	int i, j, z;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (z = 0; z <= 9; z++)
			{
				if(i < j && j < z)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(z + '0');
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
