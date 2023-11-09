#ifndef FILEIO_H
#define FILEIO_H

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdarg.h>

#define BUFF_SIZE 1024
typedef struct elf {
	uint8_t     e_ident[16];
	uint16_t    e_type;
	uint16_t    e_machine;
	uint32_t    e_version;
	uint64_t    e_entry;
	uint64_t    e_phoff;
	uint64_t    e_shoff;
	uint32_t    e_flags;
	uint16_t    e_ehsize;
	uint16_t    e_phentsize;
	uint16_t    e_phnum;
	uint16_t    e_shentsize;
	uint16_t    e_shnum;
	uint16_t    e_shstrndx;
} MyElfhdr;

typedef unsigned int _uint;
typedef unsigned long int _ulint;
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
size_t _strlen(char *str);
int close_fd(ssize_t fd_a, ssize_t fd_b);
int wrong_args(void);
int read_fail(char *);
int write_fail(char *);
void print_elfhdr(const MyElfhdr *);
#endif
