#include "main.h"
/**
  *_memcpy - function that copies memory area
  *@dest: the destination of the copied values
  *@src: the values needs to be copied
  *@n: the number of bites that will be copied
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		src[i] = dest[i];
		i++;
	}
	return (&dest);
}
