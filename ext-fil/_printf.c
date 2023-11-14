#include "main.h"

/**
 * _printf - custom printf
 * @format: identifier look for
 *
 * Return: integer
 */

int _printf(const char * const format, ...)
{
	convert p[] = {
		{"%s", printf_string}, {"%c", print_char},
		{"%%", print_per},
		{"%i", printf_int}, {"%d", print_dec},
		{"%b", printf_bin}, {"%u", printf_unsigned},
		{"%o", print_oct}, {"%x", print_hex}, {"%X", print_HEX},
		{"%S", print_exc_str}, {"%p", print_pointer}
	};

	va_list args;
	int i = 0, lens = 0;
	int j;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (p[j].ph[0] == format[i] && p[j].ph[1] == format[i + 1])
			{
				lens += p[j].function(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		putchar_prt(format[i]);
		lens++;
		i++;
	}
	va_end(args);
	return (lens);
}
