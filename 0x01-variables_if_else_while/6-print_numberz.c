#include <stdio.h>
/**
  *main - Entry point
  *Discription: printing all single digit base 10 number using putchar
  *Return: Always 0
  */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
