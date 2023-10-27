#include "main.h"
#include <stdio.h>

void _puts(char *str);
/**
* _puts - A function that prints a string
* @str: a variable that holds the string to be printed
* Return: Returns nothing
**/

void _puts(char *str) {
	while (*str) {
	putchar(*str);
	str++;
	}
	putchar('\n'); /*Add a newline character to mimic the behavior of puts*/
}
