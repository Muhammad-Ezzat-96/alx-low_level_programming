#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *_strdup - function that copys a string to a new automatically allocatetd
  *memory
  *@str: the string to be copied
  *Return: a pointer to the copied string or NULL
  */
char *_strdup(char *str)
{
	char *ptr;
	int i;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
			;
		ptr = (char *)malloc(sizeof(char) * i);
		j = 0;
		while (j < i)
		{
			ptr[j] = str[j];
			j++;
		}
	return (ptr);
	}
}
