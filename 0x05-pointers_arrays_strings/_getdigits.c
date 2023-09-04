/**
 * _getdigits - extracts first set of digits in a string
 * @str: the string pointer
 * Return: pointer to array of number chars
 */
char *_getdigits(char *str)
{
	unsigned int len, i, j;
	char curr, next, *digits;

	len = _strlen(str);
	digits = malloc(len);
	j = 0;

	for (i = 0; i < len; i++)
	{
		curr = *(str + i);
		next = *(str + (i + 1));
		if (curr >= 48 && curr <= 57)
		{
			*(digits + j) = curr;
			if (next >= 48 && next <= 57)
				j++;
			else
				break;
		}
	}
	return (digits);
}
