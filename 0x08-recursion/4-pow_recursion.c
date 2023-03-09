#include "main.h"

/**
 * _pow_recursion - returns the factorial of agiven int number
 * @x: the arguement no.1 base number
 * @y: the argument no.2 power number
 * Return: the result of power operation & -1 at error
 */
int _pow_recursion(int x, int y)
{
int res;
if (y < 0)
	return (-1);
if (y == 0)
	return (1);
res = x * _pow_recursion(x, --y);
return (res);
}
