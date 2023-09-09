#include <stdio.h>
/**
  *main - Entry point
  *Discription: 'printing the alphabet in lower cases'
  *Return: always 0
  */
int main(void)
{
	char ch = 'a';
		for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);

	}
	putchar('\n');
	return (0);
}
