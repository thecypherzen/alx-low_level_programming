#ifndef MORE_PTRS_H
#define MORE_PTRS_H

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int _putchar(char);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
int _isalpha(int c);
int _islower(int c);
int _abs(int);
int _isupper(int);
int _isdigit(int);
int _atoi(char *s);
int _strlen(char *s);
void _puts(char *str);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
unsigned int _getifd(char *s);
unsigned int _ifneg(char *s);
char *_getdigits(char *str);
unsigned int _str_len(char *s);

#endif /* MORE_PTRS_H */
