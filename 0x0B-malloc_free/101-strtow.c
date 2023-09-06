#include "main.h"

/**
 * strtow - splits a string into words.
 * @str: the string
 * Return: pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int i, j, k, wlen, found;
	char **words;

	if (str == NULL || (int)strlen(str) == 0)
		return (NULL);
	words = make_arr(str), j = found = 0;
	if (words == NULL)
		return (NULL);
	while (*str != '\0')
	{
		if (*str == ' ')
			str++, i++;
		else
		{
			wlen = k = 0, found = 1;
			while (str[k] != ' ' && str[k] != '\0')
				wlen++, k++;
			words[j] = (char *)malloc((wlen + 1) * sizeof(char));
			if (words[j] == NULL)
			{
				for (k = 0; k < j; k++)
					free(words[k]);
				free(words);
				return (NULL);
			}
			else
			{
				for (k = 0; k < wlen; k++)
					words[j][k] = *str, str++, i++;
				words[j][k] = '\0';
			}
			j++;
		}
	}
	str -= i;
	return ((!found) ? NULL : words);
}

/**
 * make_arr - makes an array of pointers of given length
 * @str: string to extract from
 * Return: ptr to arr on success, NULL otherwise.
 */
char **make_arr(char *str)
{
	int num;
	char **words;

	num = 0;
	/* get number of words */
	while (*str != '\0')
	{
		if (*str != ' ')
		{
			while (*str != ' ' && *str != '\0')
				str++;
			num++;
		}
		else
			str++;
	}

	/* create array of size num */
	words = (char **)malloc((num + 1) * sizeof(char *));
	if (words != NULL)
	{
		words[num] = NULL;
		return (words);
	}
	return (NULL);
}
