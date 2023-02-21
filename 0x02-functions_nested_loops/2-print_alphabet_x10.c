#include "main.h"

/**
 * print_alphabet_x10 - function to print alphabet 10x
 *
 * Return: alwats 0
 */


void print_alphabet_x10(void)
{
	int x;
	char i;

	for (x = 1 ; x <= 10 ; x++)
	{
		for (i = 'a' ; i <= 'z' ; i++)
			_putchar(i);
		_putchar('\n');
	}
}
