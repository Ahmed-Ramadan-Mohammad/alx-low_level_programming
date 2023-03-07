#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - returns the absolute value of number it takes
 * @n: the arguement number
 * Return: no return
 */
void print_to_98(int n)
{
if (n > 98)
{
	while (n >= 98)
	{
		printf("%d, ", n);
		n--;
	}
	printf("\n");
}
if (n <= 98)
{
	while (n <= 98)
	{
		printf("%d, ", n);
		n++;
	}
	printf("\n");
}
