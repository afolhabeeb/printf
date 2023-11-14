#include "main.h"

/**
 * print_oct - converts integer to octa decimal
 * @val: argument
 *
 * Return: octa decimal
 */

int print_oct(va_list val)
{
	int i, counter = 0;
	int *array;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num /= 8;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 8;
		temp /= 8;
	}
	for (i = counter - 1; i >= 0; i--)
		putchar_prt(array[i] + '0');

	free(array);
	return (counter);
}
