#include "main.h"

/**
 * print_last_digit - function prints the last digit
 *
 * @n: function parameter
 *
 * Return: i
 */

int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (n < 0)
		i = -i;
	_putchar(i + '0');
	return (i);
}
