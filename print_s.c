#include "main.h"

/**
 * printf_string - print a string.
 *
 * @val: argument
 * Return: the lenght of the string
 */

int printf_string(va_list val)
{
	char *str;
	int i;
	int str_len;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(NULL)";
		str_len = _strlen(str);
		for (i = 0; i < str_len; i++)
			putchar_prt(str[i]);
		return (str_len);
	}
	else
	{
		str_len = _strlen(str);
		for (i = 0; i < str_len; i++)
			putchar_prt(str[i]);
		return (str_len);
	}
}
