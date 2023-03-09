#include "main.h"

/**
 * nsqrt - computes the natural square root of
 * a given number
 * @n: the arguement given number
 * @i: the argument 2
 * Return: the natural square root and -1 if there's not
 */
int nsqrt(int n, int i)
{
int c = i * i;
int r;
if (n > c)
{
	r = nsqrt(n, ++i);
	return (r);
}
else if (n == c)
{
	return (i);
}
else
{
	return (-1);
}
}
/**
 * _sqrt_recursion - returns the natural sqrt of the given number
 * @n: the arguement given number
 * Return: natural sqrt or -1 if it hasn't
 */
int _sqrt_recursion(int n)
{
int r, i = 1;
if (n < 0)
	return (-1);
r = nsqrt(n, i);
return (r);
}
