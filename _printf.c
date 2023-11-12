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

	if (format == NULL)
		return (-1);

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			write(1, format, 1);
			count++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == '%')
			{
				write(1, format, 1);
				count++;
			}
			else if (*format == 'c')
			{
				char c = va_arg(args, int);

				write(1, &c, 1);
				count++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char*);
				int len_str = 0;

				while (str[len_str] != '\0')
					len_str++;
				write(1, str, len_str);
				count += len_str;
			}
		}
		format++;
	}
	va_end(args);
	return (count);
}
