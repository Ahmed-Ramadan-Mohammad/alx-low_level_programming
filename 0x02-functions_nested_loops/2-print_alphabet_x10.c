#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: '10 times print alphabet'
 */
void print_alphabet(void)
{
int i, j;
for (j = 0; j < 10; j++)
{
for (i = 'a'; i <= 'z'; i++)
_putchar(i);
_putchar('\n');
}
}
