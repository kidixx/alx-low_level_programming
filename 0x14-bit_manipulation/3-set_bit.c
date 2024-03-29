/*
 * File_name: 3-set_bit.c
 * date: 4th of may, 2023
 * owner: imo prince
 * Size: undefined
 * Project: alx-low_level_programming
 * Status: submitted.
 */

#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index.
 * @n: a pointer to the number to change
 * @index: index of the bit to set to 1
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
