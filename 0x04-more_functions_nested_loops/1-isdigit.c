#include "main.h"

/**
 * _isdigit - checks for digits
 * @c: parameter
 * Return: must equal 0 for success
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
