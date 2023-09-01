#include "main.h"
/**
* _strlen_recursion - Returns the length of a string.
* @s: The string to be measured.
*
* Return: The length of the string.
*/
int _strlen_recursion(char *s)

{
	int length = 1;

	if(*s)
	{
	_strlen_recursion(s + 1);
	length = _strlen_recursion(s + 1) + length;
	}
	return length;
}

