#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the program
 *
 * return: 0 if success, 1 if eeror
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
