/**
 * main - Entry point
 * Description: 'use putchar to print'
 * Return: Always 0 (Success)
 */
#include <stdio.h>
int main(void)
{
int i, l = 97;
for (i = 0 ; i < 26 ; i++)
{
putchar(l);
l++;
}
putchar('\n');
return (0);
}
