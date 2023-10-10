#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *string_nconcat: concatenates two string
  *@s1: first int
  *@s2: second int
  *@n: the first n bytes of s2
  *Return: the two strings concatenanted or NULL
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, k;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		;
	ptr = malloc(sizeof(char) * (i + n));
	if (ptr == NULL)
		return (NULL);
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (n >= j)
	{
		i = 0;
		while (s1[i] != '\0')
		{
			ptr[i] = s1[i];
			i++;
		}
		j = i;
		k = 0;
		while (s2[j] != '\0')
		{
			ptr[j] = s2[k];
			j++;
			k++;
		}
		return (ptr);
	}
	else
	{
		i = 0;
		while (s1[i] != '\0')
		{
			ptr[i] = s1[i];
			i++;
		}
		j = i;
		k = 0;
		while (k < n)
		{
			ptr[j] = s2[k];
			j++;
			k++;
		}
		return (ptr);
	}
}
