#include <stdio.h>
#include <stdlib.h>
/**
  *main - Entry point
  *@argc: the count of arguments passed
  *@argv: the the cript content of the argument
  *Return: always 0
  */
int main(int argc, char *argv[])
{
	int i = 0;
	int j;

	if (argc == 2)
	{
		j = atoi(argv[1]);
		if (j < 0)
		{
			printf("0\n");
		}
		while (j > 0)
		{
			if (j % 25 < j)
			{
				j = j - 25;
				i++;
			}
			else if (j % 10 < j)
			{
				j = j - 10;
				i++;
			}
			else if (j % 5 < j)
			{
				j = j - 5;
				i++;
			}
			else if (j % 2 < j)
			{
				j = j - 2;
				i++;
			}
			else if (j % 1 < j)
			{
				j = j - 1;
				i++;
			}
		}
		printf("%d\n", i);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
