#include "main.h"

/**
 * print_hex_extra - converts integer to ASCII lower
 * @num: argument
 *
 * Return: hexa decimal
 */

int print_hex_extra(unsigned long int num)
{
	int i, counter = 0;
	int *array;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(long int));

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
