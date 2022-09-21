#include "main.h"

/**
 * _strncat - concatenates two strings
 * @src: param
 * @dest: param 2
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (src[a] != '\0')
	{
		a++;
	}
	while (dest[b] != '\0')
	{
		b++;
		a++;
		src[a] = dest[b];
	}
	src = '\0';
	return (0);
}
