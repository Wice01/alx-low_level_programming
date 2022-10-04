#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: size of array
 * @c: character
 *Return: must return a char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *pointer;

	if (size == 0)
	{
		return (NULL);
	}

	pointer = (char *) malloc(size * sizeof(char));

	if (pointer == 0)
	{
		return (NULL);
	}
	else
	{
		i = 0;

		while (i < size)
		{
			*(pointer + i) = c;
			i++;
		}
	}
	return (pointer);
}
