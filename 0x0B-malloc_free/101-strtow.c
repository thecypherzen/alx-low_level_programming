#include "main.h"


/**
 * strtow - splits a string into words.
 * @str: the string
 * Return: pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int i, j, steps, wlen, found;
	char **words;

	if (str == NULL || (int)strlen(str) == 0)
		return (NULL);
	words = make_arr(str), j = steps = found = 0;
	if (words == NULL)
		return (NULL);
	for (; *str != '\0'; str++, steps++)
	{
		if (*str != ' ')
		{
			wlen = i = 0, found = 1;
			while (str[i] != ' ')
				wlen++, i++;
			words[j] = (char *)malloc(wlen * sizeof(char *));
			if (words[j] != NULL)
			{
				for (i = 0; i < wlen; i++)
				{
					words[j][i] = *str,
					str++, steps++;
				}
				j++;

			}
			else
				return (_free(words, j));
		}
	}
	str -= steps;
	if (!found)
		free(words);
	return ((!found) ? NULL : words);
}

/**
 * _free - frees 2d array
 * @arr: the array
 * @max: the max index of arr
 * Return: NULL always
 */
char **_free(char **arr, int max)
{
	int i;

	for (i = 0; i <= max; i++)
		free(arr[i]);
	free(arr);
	return (NULL);
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
			while (*str != ' ')
				str++;
			num++;
		}
		str++;
	}
	/* create array of size num */
	words = (char **)malloc((num + 1) * sizeof(char **));
	if (words != NULL)
	{
		words[num] = NULL;
		return (words);
	}
	return (NULL);
}
