#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: 'use putchar to print'
 * Return: Always 0 (Success)
 */
int main(void)
{
int l, n;
srand(time(0));
n = rand() - RAND_MAX / 2;
l = n % 10;
if (l == 0)
printf("Last digit of %d is %d and is 0\n", n, l);
else if (l > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, l);
else if (l < 6)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
return (0);
}
