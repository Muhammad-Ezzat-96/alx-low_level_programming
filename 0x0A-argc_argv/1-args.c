#include <stdio.h>
#include "main.h"
/**
  *main - Entry point
  *@argc: counts the # of arguments
  *@argv: the content ofthe arguments
  *Return: always 0
  */
int main(int argc, char *argv[])
{
	int i = 0;
	(void)argv;

	while (i < argc)
	{
		i++;
	}
	printf("%d\n", i - 1);
	return (0);
}

