/**
 * _getifd - gets index of first digit in a string of chars.
 * @str: the string
 * Return: the index
 */
int _getifd(char *str)
{
	int i, ifd;
	char curr;

	ifd = -1;
	for (i = 0; i < _strlen(str); i++)
	{
		curr = *(str + i);
		if (curr >= 48 && curr <= 57)
		{
			ifd = i;
			break;
		}
	}
	return (ifd);
}
