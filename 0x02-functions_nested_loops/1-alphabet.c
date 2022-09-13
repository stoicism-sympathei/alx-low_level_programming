#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
#include "main.c"
/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{    print_alphabet();

    int j;
   

    for (j = 'a'; j <= 'z'; j++)
    {
       _putchar(j);
    }
       _putchar('\n');
} 
