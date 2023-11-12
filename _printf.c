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
	unsigned int i, count = 0, str_cnt;
	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			putchar_prt(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			putchar_prt(va_arg(args, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			str_cnt = puts_prt(va_arg(args, char *));
			i++;
			count += (str_cnt - 1);
		}
		else if (format[i + 1] == '%')
		{
			putchar_prt('%');

		}
		count += 1;


	}
	va_end(args);
	return (count);

}
