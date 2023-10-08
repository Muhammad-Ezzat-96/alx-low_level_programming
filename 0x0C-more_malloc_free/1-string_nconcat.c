#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *string_nconcat - Entry point
  *@s1: first input
  *@s2: second input
  *@n: number of of memory units needed to s2
  *Return: always 0
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	j = n;
	for (i = 0; s1[i]; i++)
		j++;
	ptr = malloc(sizeof(char) * (j + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		j = 0;
		for (i = 0; s1[i]; i++)
		{
			ptr[j] = s1[i];
			j++;
		}
		for (i = 0; s2[i] && i < n; i++)
		{
			ptr[j] = s2[i];
			j++;
		}
		ptr[j] = '\0';
		return (ptr);
	}
}
