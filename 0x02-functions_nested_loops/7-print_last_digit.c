#include "main.h"

/**
 * print_last_digit - returns the last digit of the
 * number it takes
 * @n: the arguement number
 * Return: abs value
 */
int print_last_digit(int n)
{
int r;
if (n >= 0)
{
	r = n % 10;
}
else if (n < 0)
{
	r = -1 * n;
	r = r % 10;
}
_putchar(r + 48);
return (r);
}
