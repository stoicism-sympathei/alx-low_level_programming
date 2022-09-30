#include <stdio.h>

/**
 * main - print all argument that recived
 *
 * Retrun: always 0 (Success)
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[++]);
	return (0);
}
