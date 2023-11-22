#include "main.h"
/**
  *print_chessboard - a functioon that prints the chess board
  *@a: the value needs to be printed
  *Return: none
  */
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	while (i < 8)
	{
		while (j < 8)
		{
			_putchar (a[i][j]);
			j++;
		}
		j = 0;
		i++;
		_putchar ('\n');
	}
}
