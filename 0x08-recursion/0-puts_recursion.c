#include "main.h"

/**
 * _puts_recursion - prints string to stdout
 * @s: the pointer arguement to first char in string array
 * Return: no return
 */
void _puts_recursion(char *s)
{
char c = *s;
if (c == '\0')
{
_putchar('\n');
return;
}
_putchar(c);
++s;
_puts_recursion(s);
}
