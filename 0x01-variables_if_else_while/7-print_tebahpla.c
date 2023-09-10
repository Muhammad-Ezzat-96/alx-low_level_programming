#include <stdio.h>
/**
  *main - Entry point
  *Discription: printing the alphabet in reverse using putchar
  *Return: always 0
  */
int main(void)
{
	int n = 'z';

	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
