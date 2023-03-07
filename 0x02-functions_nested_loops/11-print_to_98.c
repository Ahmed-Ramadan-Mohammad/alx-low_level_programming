#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - returns the absolute value of number it takes
 * @n: the arguement number
 * Return: no return
 */
void print_to_98(int n)
{
int h;
if (n > 98)
{
	h = n
	while (h > 98)
	{
		printf("%d, ", h);
		h--;
	}
	printf("%d\n", h);
}
else if (n < 98)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	printf("%d\n", n);
}
else if (n == 98)
	printf("%d\n", n);
}
