#include "main.h"

/**
 * print_array - print all digits of array.
 * @nb: number of elements to print.
 * @a: array of elements.
 **/

void print_array(char *a, int nb)
{
	int i = 0;

	while (a[i] == '0' && (i + 1) < nb)
	{
		i++;
	}
	for (; i < nb; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
}
