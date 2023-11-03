#include "main.h"
/**
  *_strlen - function to count the lenth of a specific line
  *@s : string parameter input
  *Return: the length of the string
  */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	return (i);
}
