#include <stdio.h>
/**
  *main - Entry point
  *Discription: a program that prints all possible different
  *combinations of three digits
  *Return: always 0
  */
int main(void)
{
	int x = 0;
	int y = 0;
	int z = 0;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			for (z = 0; z < 10; z++)
			{
				if (x != y && y != z && x != z && x < y && y < z && x < z)
				{
					putchar(x + 48);
					putchar(y + 48);
					putchar(z + 48);
					if (x + y + z != 24)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
