#include "main.h"

/**
 * main - This programme checks for alphabetic character.
 *
 * Returns: 1 on Success and 0 on Failure.
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
	return (0);
}
