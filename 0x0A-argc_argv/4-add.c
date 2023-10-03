#include <stdio.h>
#include <stdlib.h>
/**
  *main - Entry point
  *@argc: number of arguments
  *@argv: content of argument
  *Return: always 0
  */
int main(int argc, char *argv[])
{
	int i;
	int j;

	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
		j = atoi(argv[0]);
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] < 47 || *argv[i] > 57)
			{
				printf("Error\n");
				return (1);
			}
			j = j + (atoi(argv[i]));
		}
		printf("%d\n", j);
	}
	return (0);
}
