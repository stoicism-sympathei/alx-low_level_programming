#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0-9 except for 2 and 4.
 */
void print_most_numbers(void)
{
	int z;

	for (z = 0; z <= 9; z++)
	{
		if (z != 2 && z != 4)
			_putchar((z % 10) + '0');
	}

	_putchar('\n');
}
