#include "main.h"

/**
 * _islower - returns 1 if c is a lowercase
 * in other cases returns 0
 * @c: the charcter in ascii code
 * Return: Always 1 (Success)
 */
int _islower(int c)
{
int r;
if (c >= 'a' && c <= 'z')
r = 1;
else
r = 0;
return (r);
}
