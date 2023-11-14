#include "main.h"

/**
 * _printf - prints to standard output formatted text
 *
 * @format: pointer to printed  format.
 *
 * Return: printf
 */

int _printf(const char *format, ...)
{
	unsigned int count = 0;
	va_list args;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					char c = va_arg(args, int);

					count += write(1, &c, 1);
					break;
				case 's':
					char *str = va_arg(args, char*);
					int len_str = 0;

					while (str[len_str] != '\0')
						len_str++;
					count += write(1, str, len_str);
					break;
				case '%':
					write(1, format, 1);
					count++;
					break;
				default:
					break;
			}
			format++;
		}
		else
		{
			write(1, format, 1);
			count++;
			format++;
		}
	}
	va_end(args);
	return (count);
}
