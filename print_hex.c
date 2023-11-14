#include "main.h"

/**
 * print_hex - converts integer to hexa decimal
 * @val: argument
 *
 * Return: hexa decimal
 */

int print_hex(va_list val)
{
	int i, counter = 0;
	int *array;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		putchar_prt(array[i] + '0');
	}

	free(array);
	return (counter);
}