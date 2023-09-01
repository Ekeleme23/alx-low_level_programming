#include "main.h"

/**
* _puts_recursion - Prints a string followed by a new line
*
*@s: The variable that holds the string
*
*Return: nothing
*/
void _puts_recursion(char *s)
{
if (*s)
{
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
	_putchar('\n');
}
