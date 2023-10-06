#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *argstostr - concatenates the arguments of your program
 *@argc: number of arguments
 *@argv: arguments' content
 * Return: a pointer to a new string
 */
char *argstostr(int argc, char **argv)
{
	int i;
	int j;
	char *ptr = NULL;
	int k;
	int x;

	k = 0;
	x = 0;
	if (argc == 0 || argv == NULL)
		return (NULL);
	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			x++;
		}
	}

	ptr = (char *)malloc(x + argc + 1 * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			ptr[k] = argv[i][j];
			k++;
		}
		ptr[k] = '\n';
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}
