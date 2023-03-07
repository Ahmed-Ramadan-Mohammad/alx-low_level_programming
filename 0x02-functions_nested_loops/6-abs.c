#include "main.h"

/**
 * _abs - returns the absolute value of number it takes
 * @n: the arguement number
 * Return: abs value
 */
int _abs(int n)
{
int r;
if (n >= 0)
{
	r = n;
}
else if (n < 0)
{
	r = -1 * n;
}
return (r);
}
