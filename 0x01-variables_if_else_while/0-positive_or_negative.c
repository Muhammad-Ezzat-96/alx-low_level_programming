#include <stdlib.h>
#include <time.h>
<<<<<<< HEAD
/**
  *main - Entry point
  *Discription: Check if a number positive or negative
=======
#include <stdio.h>
/**
  *main - Entry point
  *Discription: checking if number is positive or negative
>>>>>>> 52cd0d9bdd30b8093548fddf5a53632a0d021860
  *Return: always 0
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
