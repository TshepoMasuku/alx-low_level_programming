#include "main.h"

/**
 * _abs - This programme prints out the absolute value a number.
 * @i: Is the integer that its absolute value will be printed out.
 * Return: 0 Always (Success)
 */

int _abs(int i)
{
	int ans;

	ans = 0;
	if (i < 0)
	{
		ans = i * -1;
		_putchar(i);
		_putchar(ans);
	}
	else if (i > 0)
	{
		_putchar(i);
	}
	else
	{
		_putchar('0');
	}
	return (0);
}
