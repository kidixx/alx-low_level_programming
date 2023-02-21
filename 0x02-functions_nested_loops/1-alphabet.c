#include "main.h"
/**
 * print alphabet - function that print alphabets
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
