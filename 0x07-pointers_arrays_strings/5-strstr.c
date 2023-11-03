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
	int j;

	while (haystack[i] != '\0')
	{
		j = 0;

		if (needle[j] == haystack[i + j])
		{
			while (needle[j] == haystack[i + j])
			{
				j++;
				if (needle[j] != haystack[i + j])
					break;
			}
		}
		if (needle[j] == '\0')
			return (&haystack[i]);

		i++;
	}
	return (NULL);
}
