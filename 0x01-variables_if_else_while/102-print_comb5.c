#include <stdio.h>

/**
 * main- Entry Point
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	int i, k, j, z;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				for (z = 0; z <= 9; z++)
				{
					if (i < k || j < z)
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(' ');
						putchar(k + '0');
						putchar(z + '0');
						if (i != 9 || j != 8 ||
						k != 9 || z != 9)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
