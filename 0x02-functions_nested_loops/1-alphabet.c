#include "main.h"
/**
 * print_alphabet - function that print alphabets in lower case
 *
 * Return: always 0
 */


void print_alphabet(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; x++)
		_putchar(x);
	_putchar('\n');
}
