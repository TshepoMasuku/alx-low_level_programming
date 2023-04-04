#include "main.h"

/**
 * _isupper - This programme checks if a character is an uppercase alphabet.
 * @c: Is the charecter that will be checked for being uppercase.
 * Return: 1 if a character is an uppercase alphabet, otherwise 0.
 */

int _isupper(int c)
{
	char ch;

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		if (c == ch)
		{
			return (1);
		}
	}
	return (0);
}
