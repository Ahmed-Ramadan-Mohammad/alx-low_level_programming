#include "main.h"

/**
 * times_table - prints minutes of day
 * Return: no return
 */
void times_table(void)
{int x, y, z, u, d;
for (x = 0; x <= 9; x++)
{
	_putchar(48);
	_putchar(',');
	for (y = 1; y <= 9; y++)
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
		else if (z <= 9)
		{
			_putchar(32);
			_putchar(48 + z);
			_putchar(',');
		}
	}
	_putchar('\n');
}
}

