#include "main.h"

/**
 * times_table - prints minutes of day
 * Return: no return
 */
void times_table(void)
{int x, y, z, u, d;
for (x = 0; x <= 9; x++)
{
	for (y = 0; y <= 9; y++)
	{
		z = x * y;
		if (z > 9)
		{
			u = z % 10;
			d = (z - u) / 10;
			_putchar(32);
			_putchar(48 + d);
			_putchar(48 + u);
			_putchar(',');
		}
		else
		{
			_putchar(32);
			_putchar(48 + z);
			_putchar(',');
		}
	}
	_putchar('\n');
}
}
