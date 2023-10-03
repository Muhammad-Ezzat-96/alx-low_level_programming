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
	int j = 0;
	char *c;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			c = argv[i];
			while (*c != 0)
			{
				if (*c < 47 || *c > 57)
				{
					printf("Error\n");
					return (1);
				}
				c++;
			}
			j = j + (atoi(argv[i]));
		}
		printf("%d\n", j);
	}
	return (0);
}
