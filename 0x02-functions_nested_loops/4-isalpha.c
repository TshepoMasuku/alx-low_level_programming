#include "main.h"

/**
 * _isalpha - This programme checks for alphabetic character.
 * @c: Is the character being checked, for being alphabatic.
 * Return: 1 if char is alphabetic character, otherwise 0.
 */

int _isalpha(int c)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (c == ch)
		{
			return (1);
		}
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		if (c == ch)
		{
			return (1);
		}
	}
	return (0);
}
