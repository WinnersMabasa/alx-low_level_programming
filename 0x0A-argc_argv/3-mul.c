#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - A program that multiplies two numbers
 * @argc: The arguments' counter
 * @argv: The arguments' values
 * Return: Always 0 (Success)
 */
int _mul(int argc, char *argv[])
{
	int i, j;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = 1;

		for (i = 1; i < 3; i++)
			j *= atoi(argv[i]);

		printf("%d\n", j);
	}

	return (0);
}
