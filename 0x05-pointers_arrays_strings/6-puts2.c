#include "main.h"

/**
 * puts2 - prints every other character
 * @s: parameter
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		i = i + 2;
		_putchar(str[i]);
	}
	_putchar('\n');
}
