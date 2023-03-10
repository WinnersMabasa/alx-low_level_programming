#include "main.h"
#include <stdio.h>

/**
 * main - A program that prints the number of arguements you passed into it
 * @argc: An argument counter
 * @argv: An argument values
 * Return: Always 0 (Success)
 */
int _args(int argc, char *argv[])
{
    int i;

    if (argc == 1)
        printf("%d\n", argc - 1);
    else
    {
        for (i = 0; *argv; i++, argv++)
            ;

        printf("%d\n", i - 1);
    }

    return (0);
}