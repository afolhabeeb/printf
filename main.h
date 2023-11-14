#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

/**
 * struct format - converter for printf
 * @ph: type char pointer of the specifier
 * @function: function for the conversion specifier
 *
 */

typedef struct format
{
	char *ph;
	int (*function)();
} convert;

int _printf(const char *format, ...);
int putchar_prt(char c);
int puts_prt(char *c);
int _print_d(const char *format, ...);
int print_char(va_list val);
int printf_string(va_list val);
int _strlenc(const char *str);
int _strlen(char *str);
int print_per(void);
int printf_int(va_list args);
int print_dec(va_list args);
int printf_bin(va_list val);
int printf_unsigned(va_list args);
int print_oct(va_list val);
int print_hex(va_list val);
int print_HEX(va_list val);
int print_HEX_extra(unsigned int num);
int print_exc_str(va_list val);
int print_pointer(va_list val);
int print_hex_extra(unsigned long int num);


#endif
