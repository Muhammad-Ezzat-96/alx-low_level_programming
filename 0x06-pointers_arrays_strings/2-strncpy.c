#include "main.h"
/**
  *_strncpy - function that copies a string
  *@dest: the copied string
  *@src: the string to copy from
  *@n: the number of charcters to be copied
  *Return: pointer to the copied string
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
		if (i > n)
			break;
	}
	return (dest);
}
