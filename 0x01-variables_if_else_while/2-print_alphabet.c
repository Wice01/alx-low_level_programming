#include <stdio.h>
/**
 * main - Entry point 
 *
 * Return: must be 0 for success
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z', letter++;)
		putchar(letter);
	putchar('\n');
	return (0);
}
