#include "main.h"

/**
 * prime_check - identifies the given number is a prime or not
 * @a: the arguement given number
 * @i: the argument 2
 * Return: 1 if prime and 0 if not
 */
int prime_check(int a, int i)
{
if (a == i)
	return (1);
if ((a % i) != 0)
{
	int r2;

	r2 = prime_check(a, (i + 1));
	return (r2);
}
else
{
	return (0);
}
}
/**
 * is_prime_number - identifies the given number is a prime or not
 * @n: the arguement given number
 * Return: 1 if prime and 0 if not
 */
int is_prime_number(int n)
{
if (n == 1 || n == -1)
	return (0);
else if (n == 2 || n == -2)
	return (1);
else
{
	int i = 2;
	int r2;

	r2 = prime_check(n, i);
	return (r2);
}
}
