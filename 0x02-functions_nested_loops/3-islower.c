#include "main.h"
/**
 * _islower - function should be printed on lower case
 *
 * @c: parameter to be printed
 *
 * Return: 1 if lower case
 * and 0 of not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
