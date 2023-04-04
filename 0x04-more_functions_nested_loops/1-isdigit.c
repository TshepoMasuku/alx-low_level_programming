#include "main.h"

/**
 * _isdigit - This programme checks if a character is a digit(0-9).
 * @c: Is the charecter that will be checked if its a digit.
 * Return: 1 if a character is a digit, otherwise 0.
 */

int _isdigit(int c)
{
	int asc;

	for (asc = 48; asc <= 57; asc++)
	{
		if (c == asc)
		{
			return (1);
		}
	}
	return (0);
}
