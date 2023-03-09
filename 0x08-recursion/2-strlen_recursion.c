#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * Description: 'returns the string's length'
 * @s: the pointer arguement to first char in string array
 * Return: the length of a string in int
 */
int _strlen_recursion(char *s)
{
char c = *s;
int count = 0;
if (c == '\0')
{
return (0);
}
count = _strlen_recursion(s + 1);
++count;
return (count);
}
