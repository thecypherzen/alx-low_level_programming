/**
 * _ifneg - checks if a string is negative or positive based on number of
 * minus signes before it.
 * @s: the string
 * Return: if negative (1) or (0)
 */
int _ifneg(char *s)
{
	int i, if_neg, negs, ifn;

	ifn = _getifd(s);
	negs = 0;

	for (i = 0; i <= ifn; i++)
	{
		if (*(s + i) == '-')
			negs++;
	}

	if_neg = (negs % 2) ? 1 : 0;
	return (if_neg);
}
