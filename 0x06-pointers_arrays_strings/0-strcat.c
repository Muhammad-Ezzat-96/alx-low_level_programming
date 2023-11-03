#include "main.h"
/**
  *_strcat - functions that concatenates two strings
  *@dest: the first string
  *@src: the second string
  *Return: pointer to the new string
  */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (&dest[0]);
}
