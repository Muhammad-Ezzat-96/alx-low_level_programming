#include <stdio.h>
#include <stdlib.h>
/**
  *main - Entry point
  *@argc: number of arguments
  *2argv: argument script
  *Return: always 0
  */
int main(int argc, char *argv[])
{
	int j;

	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}
	else
	{
		j = (atoi(argv[1])) * atoi(argv[2]);
		printf("%d\n", j);
	}
	return (0);
}
