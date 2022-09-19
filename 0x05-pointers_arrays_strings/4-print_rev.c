#include "main.h"

/**
 * print_rev - prints astring, in reverse, followed by a newline, to stdout
 * @s: the string to be printed
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	i--;
	while (i >= 0)
		_putchar(s[i--]);
	_putchar('\n');
}
