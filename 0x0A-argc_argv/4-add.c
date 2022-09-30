#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the program
 *
 * Return: 0 if success, 1 if error
 */
int main(int argc, char **argv)
{
	int  result = 0;
	int i = 1, j;

	if (argc > 1)
	{
		while (i < argc)
		{
			j = 0;
			while (argv[i][j])
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
			result += atoi(argv[i++]);
		}
	}
	printf("%d\n", result);
	return (0);
}
