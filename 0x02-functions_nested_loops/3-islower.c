#include "main.h"

/**
 * _islower - Entry point
 * Description: 'check lower case'
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
	return (1);
else
	return (0);
}
