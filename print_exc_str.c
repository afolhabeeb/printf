#include "main.h"

/**
 * print_exc_str - print exceptional non printable character
 *
 * @val: argument
 *
 * Return: non printable xter
 */

int print_exc_str(va_list val)
{
	char *s;
	int i, len = 0;
	int value;

	s = va_arg(val, char *);

	if (s == NULL)
		s = "(NULL)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			putchar_prt('\\');
			putchar_prt('x');
			len = len + 2;
			value = s[i];
			if (value < 16)
			{
				putchar_prt('0');
				len++;
			}
		len = len + print_HEX_extra(value);
		}
		else
		{
			putchar_prt(s[i]);
			len++;
		}
	}
	return (len);
}
