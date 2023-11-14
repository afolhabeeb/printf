#include "main.h"

/**
 * print_pointer - print pointer
 * @val: argument
 *
 * Return: pointer
 */

int print_pointer(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int a;
	int i, b;

	p = va_arg(val, void*);

	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			putchar_prt(s[i]);
		}
		return (i);
	}

	a = (unsigned long int)p;
	putchar_prt('0');
	putchar_prt('x');

	b = print_hex_extra(a);
	return (b + 2);
}
