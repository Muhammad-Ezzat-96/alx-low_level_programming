#include <stdio.h>
/**
  *main - Entry point
  *Discription: program that prints all possible
  *combinations of single-digit numbers
  *Return: always 0
  */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		if (n > 48 && n <= 57)
		{
			putchar(44);
			putchar(32);
		}
		putchar(n);
	}
	putchar('\n');
	return (0);
}
