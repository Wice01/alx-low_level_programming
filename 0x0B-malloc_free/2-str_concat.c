#include <stdlib.h>
#include "main.h"

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
	int len, j;
	
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size = (_strlen(s1) + _strlen(s2)+ 1);                                                                                                                
	pointer = (char *) malloc(size * sizeof(char));
	if (pointer == 0)
	{
		return (NULL);
	}
	len = 0;
	while (s1[len] == '\0')
	{
		++len;
	}
	j = 0;
	for (j = 0; s2[j] != '\0'; ++j, ++len)
	{
		s1[len] = s2[j];
	}
	s1[len] = '\0';
	return (pointer);
}
