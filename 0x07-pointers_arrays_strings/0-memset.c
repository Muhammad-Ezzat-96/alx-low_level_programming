#include "main.h"
/**
  *_memset - fills memory with a constant byte
  *@s: the memory that needs to be filled
  *@b: the byte that will fill the memory
  *@n: th number of times that byte will fill the memory
  *Return: pointer to the memory area
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (&s[0]);
}
