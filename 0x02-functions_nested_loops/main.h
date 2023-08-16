#ifndef MVP_HEADER_H
#define MVP_HEADER_H

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c); /* _putchar function */

/**
 * print_alphabet - prints lower case alphabets
 *
 * Return: void
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase, followed
 * by a new line.
 *
 * Return: void
 */
void print_alphabet_x10(void);

/**
 * _isalpha - checks if an int value reps  a char in ascii;
 * @c: the int value to be checked
 *
 * Return: 1 if lower or upper char. 0 otherwise
 */
int _isalpha(int c);
int _islower(int c);

#endif
