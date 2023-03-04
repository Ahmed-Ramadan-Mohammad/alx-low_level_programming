/**
 * main - Entry point
 * Description: 'use puts to print a string'
 * Return: Always 0 (Success)
 */
#include <stdio.h>
int main(void)
{
int i, l = 122;
for (i = 0 ; i < 26 ; i++)
{
	putchar(l);
	l--;
}
putchar('\n');
return (0);
}
