#include "main.h"
/**
  *_strcpy - copies a string
  *@dest: the copied string
  *@src: the string to copy
  *Return: the copied string
  */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
