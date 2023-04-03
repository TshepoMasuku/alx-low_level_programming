#include "main.h"

/**
 * print_sign- This programme returns values depending on the numbers sign.
 * @n: Is the number being checked.
 * Return: 0 if @n==1 or 1 if @n == 1 or -1 if @n<0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
