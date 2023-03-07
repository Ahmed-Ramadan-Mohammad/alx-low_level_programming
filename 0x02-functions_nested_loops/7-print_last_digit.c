#include "main.h"

/**
 * print_last_digit - returns the last digit of the
 * number it takes
 * @n: the arguement number
 * Return: abs value
 */
int print_last_digit(int n)
{
unsigned int R;
if (n >= 0)
{
	R = n % 10;
}
else if (n < 0)
{
	R = -1 * n;
	R = R % 10;
}
_putchar(R + 48);
return (R);
}
