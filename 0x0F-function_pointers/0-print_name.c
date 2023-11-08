/* name_printer.c */

#include "function_pointers.h"

/**
 * printName - Print a name
 * @name: The name to be printed
 */
void printName(char *name)
{
	/* Your code to print the name */
	/* For example: printf("Name: %s\n", name); */
}

/**
 * print_name - Call a function to print a name
 * @name: The name to be printed
 * @f: The function to print the name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

int main(void)
{
	char *name = "John";
	
	/* Example usage: */
	print_name(name, printName);

	return (0);
}

