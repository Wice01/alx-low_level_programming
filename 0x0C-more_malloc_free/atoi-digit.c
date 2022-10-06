/**
 * _atoi_digit - convert a char to integer.
 * @x: character to convert.
 * Return: integer.
 **/

int _atoi_digit(char x)
{
	unsigned int res;

	if (x <= '9' && x >= '0')
		res = x - '0';
	return (res);
}
