#include "main.h"
#include <stdlib.h>

/**
 * strtow - function splits strings into words
 *
 * @str: input string
 *
 * Return: ptr to arr of words, NULL otherwise
 */

char **strtow(char *str)
{
	char **arr;
	int i = 0, j, k = 0, m, n = 0, cnt = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (; str[i]; i++)
	{
		if ((str[i] != ' ' || *str != '\t') &&
					((str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\n')))
			cnt++;
	}
	if (cnt == 0)
		return (NULL);
	arr = malloc(sizeof(char) * (cnt + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0' && k < cnt; i++)
	{
		if (str[i] != ' ' || str[i] != '\t')
		{
			n = 0;
			j = i;
			while ((str[j] != ' ' || str[j] != '\t') && str[j] != '\0')
				j++, n++;
			arr[k] = malloc((n + 1) * sizeof(char));
			if (arr[k] == NULL)
			{
				for (k = k - 1; k >= 0; k++)
					free(arr[k]);
				free(arr);
				return (NULL);
			}
			for (m = 0; m < n; m++, i++)
				arr[k][m] = str[i];
			arr[k++][m] = '\0';
		}
	}
	arr[k] = NULL;
	return (arr);
}
