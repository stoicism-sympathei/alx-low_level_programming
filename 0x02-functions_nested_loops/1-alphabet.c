#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
 * print_alphabet - pritns lowercase alphabet
 */
void print_alphabet(void)
{
    int j;

    for (j = 'a'; j <= 'z'; j++)
    {
       _putchar(j);
    }
       _putchar('\n');
}
