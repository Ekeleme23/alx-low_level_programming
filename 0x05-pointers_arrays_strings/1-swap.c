#include <stdio.h>

/**
*swap_int - Writes a function that swaps the values of two integers
*
*@a: an integer to be swapped
*@b: an integer to be swapped
*Return: nothing
*/

void swap_int(int *a, int *b)
/* the functions that swaps the values of two integers*/
{
int temp = *a;
*a = *b;
*b = temp;
}
