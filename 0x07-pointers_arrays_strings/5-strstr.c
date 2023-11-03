#include "main.h"
/**
  *_strstr - function that locates a substring
  *@haystack: the full string
  *@needle: the substring
  *Return: pointer to the beginning of the located substring, or NULL
  */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int k;

	while (haystack[i] != '\0')
	{
		if (needle[j] == haystack[i])
		{
			k = i;

			while (needle[j] == haystack[i])
			{
				if (needle[j] != '\0')
				{
					continue;
				}
				i++;
				j++;
				if (needle[j] != haystack[i])
					break;
			}
			if (needle[j] == '\0')
				return (&haystack[k]);
		}
		i++;
	}
	return (NULL);
}
