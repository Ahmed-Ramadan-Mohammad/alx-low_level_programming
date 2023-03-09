#include "main.h"

/**
 * factorial - returns the factorial of agiven int number
 * @n: the arguement
 * Return: the factorial of agiven int number & -1 at error
 */
int factorial(int n)
{
if (n < 0)
	return (-1);
if (n == 0)
	return (1);
int fact = n * factorial(n - 1);
return (fact);
}
