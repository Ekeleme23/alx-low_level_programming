#include "main.h"

/**
* factorial - returns factorial of a given number
*@n: variable that holds the factorial
*
*Return 1 if n is equal to 1 and returns count, and -1
*/

int factorial(int n)
{
if (n == 0)
	{
	return 1;
	}
else if  (n>0)
	{
	int count = n * factorial(n-1);
	return count;
	}
else
	{
	return -1;
	}
}
