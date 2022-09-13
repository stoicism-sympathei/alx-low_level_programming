#include "putchar.h"


/**
 * main - prints "putchar"
 *
 * Return: always 0 (Success)
 */


int main(void)
{
     int i = 0;
     char *str = "putchar\n";

     while (str[1])
	     _putchar(str[i++]);
     return (0);

}
