#include "main.h"
/**
  *_memcpy - function that copies memory area
  *@dest: the copied bites
  *@src: the bites to be copied
  *@n: the number of bites to be copied
  *Return: pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (&dest);
}
