#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of its own main function.
 * @argc: number of arguments
 * @argv: vector of arguments
 * Return: 0 if no errors
 */
int main(int argc, char **argv)
{
	int index, num;
	char *ptr = (char *)main;

	if (argc != 2)
		printf("Error\n"), exit(1);

	num = atoi(argv[1]);
	if (num < 0)
		printf("Error\n"), exit(2);

	for (index = 0; index < num - 1; index++)
		printf("%02hhx ", ptr[index]);
	printf("%02hhx\n", ptr[index]);
	return (0);
}
