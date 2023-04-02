#include "main.h"
#include <unistd.h>

/**
 * _putchar- writes the characters c to studio
 * @c: the character to print
 *
 * Return: 1 Always on Success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
