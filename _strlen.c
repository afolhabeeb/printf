#include "main.h"

/**
 * _strlen - return the length of a string
 * @str: string pointer
 *
 * Return: 1
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}

/**
 * _strlenc - strlen function but applied to cont
 * @str: char pointer
 *
 * Return: i
 */

int _strlenc(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}
