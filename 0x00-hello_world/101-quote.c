#include <stdio.h>
/**
 * main - Entry point
 * Description: 'use putchar'
 * Return: Always 0 (Success)
 */
int main(void)
{
char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
int i;
int a = sizeof(msg);
for (i = 0; i < a; i++)
{
	putchar(msg[i]);
}
putchar('\n');
return (1);
}
