#include "main.h"

/**
 * print_char - prints a char
 * @val: arguments.
 *
 * Return: 1.
 */

int print_char(va_list val)
{
	char str;

	str = va_arg(val, int);
	putchar_prt(str);
	return (1);
}