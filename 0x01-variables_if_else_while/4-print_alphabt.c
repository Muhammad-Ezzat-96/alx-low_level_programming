#include <stdio.h>
/**
  *main - Entry point
  *Discription: printing the alphabet lower cases without e & q
  *Return: always 0
  */
int main(void)

{
	int alphabet = 'a';
		while (alphabet <= 'z')
		{
			if (alphabet == 'e' || alphabet == 'q')
			{
				alphabet++;
				continue;
			}
			putchar(alphabet);
			alphabet++;
		}
	putchar('\n');
	return (0);
}
