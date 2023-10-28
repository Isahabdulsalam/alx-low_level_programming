#include "main.h"
#include <stdio.h>

/**
 * main - entry point that print number
 * @argc: number of argument
 * @argv: number of array
 * Return: success p
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
