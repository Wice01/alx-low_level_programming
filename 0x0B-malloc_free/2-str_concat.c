#include <stdlib.h>
#include "main.h"

/**
 * _strlen - function that caculate length of character
 * @s: string
 * Return: must be integer for success
 */

int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * str_concat - concatenates two string
 * @s1: string 1
 * @s2: string 2
 * Return: must return char for success
 */

char *str_concat(char *s1, char *s2)
{
	char *pointer;
	unsigned int size;
	unsigned int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size = (_strlen(s1) + _strlen(s2) + 1);
	pointer = (char *) malloc(size * sizeof(char));
	if (pointer == 0)
	{
		return (NULL);
	}

	for (i = 0; *(s1 + i) != '\0'; i++)
		*(pointer + i) = *(s1 + i);

	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(pointer + i) = *(s2 + j);
		i++;
	}
	return (pointer);
}
