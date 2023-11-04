#include "main.h"
/**
  *_strncat - function that concatenates two strings
  *@dest: the destination where we will append
  *@src: the string that needs to be added to dest
  *@n: the length of src that needs to be added
  *Return: pointer to dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n)
	{
		if (src[j] == '\0')
			break;

		dest[i] = src[j];
		i++;
		j++;
	}
	return (&dest[0]);
}
