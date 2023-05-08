/*
 * File_name: main.h
 * Created: 8th of may, 2023
 * Auth: imo prince
 * Size: undefined
 * Project: alx-low_level_programming
 * Status: passed.
 */

#ifndef MAIN_H
#define MAIN__H

#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#define BUFSIZE 1204
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char c);
#endif
