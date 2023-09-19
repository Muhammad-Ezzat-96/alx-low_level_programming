#include "main.h"
/**
  *int _strlen - function to count the lenth of a specific line
  *@s : string parameter input
  *Return: the length of the string
  */
int _strlen(char *s)
{
	int l;

	for (l = 0; *s != '\0'; s++)
		++l;
	return (l);
}
