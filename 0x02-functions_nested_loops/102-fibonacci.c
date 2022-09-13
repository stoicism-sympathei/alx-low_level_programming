#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: always 0 (Success)
 */

int	main(void)
{
	unsigned long n_minus1 = 2;
	unsigned long n_minus2 = 1;
	unsigned long n = 0;
	int i = 0;

	printf("%lu, %lu", n_minus2, n_minus1);
	while (i < 48)
	{
		printf(", ");
		n = n_minus1 + n_minus2;
		n_minus2 = n_minus1;
		n_minus1 = n;
		printf("%lu", n);
		i++;
	}
	printf("\n");
	return (0);
}
