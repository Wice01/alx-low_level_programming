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

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		b++;
		a++;
		dest[a] = src[b];
	}
	dest = '\0';
	return (dest);
}
