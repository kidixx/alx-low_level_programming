#ifndef MAIN_H
#define MAIN_H

/*
 * file: main.h
 * file dav: A EADER FILE FOR MY PROJECT AND PROTOTYPE.
 * date: 4th of may, 2023
 * owner: imo prince chiboy
 * size: nonspecified
 * project: alx-low_level_programming
 * status: passed
 */

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif
