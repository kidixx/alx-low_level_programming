/*
 * File_name: 4-clear_bit.c
 * date: 4th of may, 2023
 * Auth: imo princ chi
 * Size: nonspecified
 * Project: alx-low_level_programming
 * Status: passed.
 */

#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: pointer to the number to change
 * @index: index of the bit to clear
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
