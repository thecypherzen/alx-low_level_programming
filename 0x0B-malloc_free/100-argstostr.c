#include "main.h"

/**
 * argstostr - function that concatenates all the arguments.
 * each argument in the new string is followed by a \n
 * @ac: num of args
 * @av: the strings themselves
 * Return: NULL if ac == 0 or av == NULL or program fails
 *         pointer to new string on success.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, sz, lent;
	char *newstr;

	if (ac == 0 || av == NULL)
		return (NULL);
	sz = ac + 1;
	for (i = 0; i < ac; i++)
		sz += (int)strlen(av[i]);
	i = 0, j = 0;

	newstr = (char *)malloc(sz * sizeof(char));
	if (newstr != NULL)
	{
		while (i < sz - 1)
		{
			for (; j < ac; j++)
			{
				lent = (int)strlen(av[j]);
				for (k = 0; k <= lent; k++)
				{
					if (av[j][k] != '\0')
						newstr[i] = av[j][k], i++;
					else
						newstr[i] = '\n', i++;
				}
			}
		}
		newstr[i] = '\0';
		return (newstr);
	}
	else
		return (NULL);
}
