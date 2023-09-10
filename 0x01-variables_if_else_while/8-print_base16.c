#include <stdio.h>
/**
  *main - Entry point
  *Discription: printing all 16 base numbers in lower case
  *Return: always 0
  */
int main(void)
{
	int x = 48;
	int y = 97;

	while (x <= 57)
	{
		putchar(x);
		x++;
	}
	while (y <= 102)
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
