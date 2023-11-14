#include "main.h"

/**
 * putchar_prt - print character
 *
 * @c: xter input
 * Return: 1
 */

int putchar_prt(char c)
{
	return (write(1, &c, 1));
}
