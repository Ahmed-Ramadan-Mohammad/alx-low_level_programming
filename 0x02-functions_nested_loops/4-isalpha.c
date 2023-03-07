#include "main.h"

/**
 * _isalpha - returns 1 if c is a letter
 * in other cases returns 0
 * @c: the charcter in ascii code
 * Return: Always 1 (Success)
 */
int _isalpha(int c)
{
int r;
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
r = 1;
else
r = 0;
return (r);
}
