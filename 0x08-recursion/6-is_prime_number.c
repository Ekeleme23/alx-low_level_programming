#include "main.h"

int is_prime_number(int n);
/**
* primer - checks if the number is prime number and calls the2nd function
* @n: this is the number to be checked
*
* Return: a value to call n
**/
int is_prime_number(int n)
{
	if (n <= 1)
	{
	return (0);
}
else if (n == 2)
	{
	return (1);
	}
return (primer(n, 2));
}

/**
* is_prime_number - a function that checks if n is a prime number
* @n: variable to be checked
* @i: variable use dto check
* Return: 0 or 1 to indicate if its prime
**/
int primer(int n, int i)
{
	if (i == 1)
	{
	return (1); /*If we've reached 1 and found no divisors, it's a prime number*/
	}
	else if (n % i == 0)
	{
	return (0); /*If n is divisible by i, it's not prime*/
	}
	else
	{
	return (primer(n, i - 1)); /*Check the next value of i*/
	}
}
