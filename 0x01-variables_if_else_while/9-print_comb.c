/**
 * main - Entry point
 * Description: 'use putchar to print'
 * Return: Always 0 (Success)
 */
#include <stdio.h>
int main(void)
{
int i, l = 48;
for (i = 0 ; i < 10 ; i++)
{
putchar(l);
putchar(',');
if (i < 9)
{
putchar(' ');
}
l++;
}
return (0);
}
