#include <stdio.h>
/**
  *main - Entry point
  *printf - prints a specific char
  *@argc: number of arguments
  *@argv: the contents of the array of arguments
  *Return: always 0
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
