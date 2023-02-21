#include "main.h"

/**
 * _abs - absolute value checker
 *
 * @a: para meter for checks
 *
 * Return: always a
 */
int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
