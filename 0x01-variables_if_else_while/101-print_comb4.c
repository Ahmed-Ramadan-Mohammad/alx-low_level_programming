/**
 * main - Entry point
 * Description: 'use putchar to print'
 * Return: Always 0 (Success)
 */
#include <stdio.h>
int main(void)
{
int i, j, k, l1, l2, l3;
l1 = l2 = l3 = 48;
for (i = 0 ; i < 10 ; i++)
{
for (j = 0 ; j < 10 ; j++)
{
for (k = 0 ; k < 10 ; k++)
{
if (i != j && i != k && j != k && i < j && j < k)
{
putchar(l1);
putchar(l2);
putchar(l3);
if (i != 7)
{
putchar(',');
putchar(' ');
}
}
l3++;
}
l2++;
l3 = 48;
}
l1++;
l2 = 48;
}
putchar('\n');
return (0);
}
