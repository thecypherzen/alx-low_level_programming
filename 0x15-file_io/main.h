#ifndef FILEIO_H
#define FILEIO_H

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdarg.h>

#define BUFF_SIZE 1024

typedef unsigned int _uint;
typedef unsigned long int _ulint;
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
size_t _strlen(char *str);
int close_fd(ssize_t fd_a);
int wrong_args(char *);
int read_fail(char *);
int write_fail(char *);
#endif
