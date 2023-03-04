/**
 * main - Entry point
 * Description: 'use puts to print a string'
 * Return: Always 0 (Success)
 */
#include <stdio.h>
int main(void)
{
int i, j, l = 97;
for (j = 0 ; j < 2 ; j++)
{
for (i = 0 ; i < 26 ; i++)
{
putchar(l);
l++;
}
l = 65;
}
putchar('\n');
return (0);
}
