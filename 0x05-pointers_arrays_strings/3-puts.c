#include "main.h"
/**
*_puts - Displays values to a string
*@str: the string to be printed
*
*Return nothing
*/

void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}

_putchar('\n');
}
