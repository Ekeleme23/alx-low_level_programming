#include "main.h"
int main_sqrt_recursions(int n, int i);
/**
* _sqrt_recursion - returns the natural square root of a number
* @n: number to calculate the square root of
*
* Return: calls the helper function
*/
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (main_sqrt_recursions(n, 1));
}

/**
* main_sqrt_recursions - recurses to find the natural
* square root of a number
* @n: number to calculate the sqaure root of
* @i: iterator
*
* Return: the resulting square roo
*/
int main_sqrt_recursions(int n, int i)
{
if (i * i == n)
{
return (i);
}
else if (i * i > n)
{
return (-1);
}
else
{
return (main_sqrt_recursions(n, i + 1));
}
}
