/**
 * _isNumber - Define if a string is a number.
 * @argv: Pointer to string.
 * Return: success (0).
 **/

int _isNumber(char *argv)
{
	int i;

	for (i = 0; argv[i]; i++)
		if (argv[i] < 48 || argv[i] > 57)
			return (1);
	return (0);
}
