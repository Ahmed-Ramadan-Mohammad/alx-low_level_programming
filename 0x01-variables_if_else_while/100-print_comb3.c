/**
 * main - Entry point
 * Description: 'use putchar to print'
 * Return: Always 0 (Success)
 */
#include <stdio.h>
int main(void)
{
int i, j, l1, l2;
l1 = l2 = 48;
for (i = 0 ; i < 10 ; i++)
{
for (j = 0 ; j < 10 ; j++)
{
if (i != j && i < j)
{
putchar(l1);
putchar(l2);
if (i != 8)
{
putchar(',');
putchar(' ');
}
}
l2++;
}
l1++;
l2 = 48;
}
putchar('\n');
return (0);
}
