#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *str_concat - function that returns two strings concatenated in a
  *dynamically allocated memory
  *@s1: the first string
  *@s2: th second string
  *Return: the strings concatenated or NULL
  */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j;
	
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if(s1 == 0 || s2 == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
		;
		for (j = 0; s2[j] != '\0'; j++)
		;
		ptr = malloc(sizeof(char) * (i + j));
		i = j = 0;
		while(s1[i] != '\0')
		{
			ptr[i] = s1[i];
			i++;
		}
		while (s2[j] != '\0')
		{
			ptr[i] = s2[j];
			i++;
			j++;
		}
		return (ptr);
	}
}
