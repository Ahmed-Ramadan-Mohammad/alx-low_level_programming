#include "main.h"

/**
 * _print_rev_recursion - prints string reversed to stdout
 * @s: the pointer arguement to first char in string array
 * Return: no return
 */
void _print_rev_recursion(char *s)
{
char c = *s;
if (c == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(c);
}
