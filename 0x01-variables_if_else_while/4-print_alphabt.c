/**
 * main - Entry point
 * Description: 'use puts to print a string'
 * Return: Always 0 (Success)
 */
#include <stdio.h>
int main(void)
{
int i, l = 97;
for (i = 0 ; i < 26 ; i++)
{
if (l != 101 && l != 113)
{
	putchar(l);
}
	l++;
}
putchar('\n');
return (0);
}
