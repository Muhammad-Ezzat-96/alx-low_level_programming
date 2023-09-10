#include <stdio.h>
/**
  *main - Entry point
  *Discription: a program that prints all possible different
  *combinations of two digits
  *Return: always 0
  */
int main(void)
{
	int x = 0;
	int y = 0;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if (x != y && x < y)
			{
				putchar(x + 48);
				putchar(y + 48);

				if (x + y != 17)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
