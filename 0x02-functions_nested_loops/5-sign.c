#include "main.h"

/**
 * print_sign - returns + if c is a postive
 * and - if negative and 0 if zero with printing returns
 * @n: the number checked
 * Return: + if positve - if negative 0 if zero
 */
int print_sign(int n);
{
int r;
if (n > 0)
{
	r = '+';
	_putchar(r);
}
else if (n < 0)
{
r = '-';
_putchar(r);
}
else
{
r = '0';
_putchar(r);
}
return (r);
}
