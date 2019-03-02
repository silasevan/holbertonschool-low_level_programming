#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two numbers
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n = 0;
	int m = 0;
	int sum = 0;

	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}

	else
	{
		n = atoi(argv[1]);
		m = atoi(argv[2]);
		sum = n * m;

		printf("%d\n", sum);
	}

	return (0);
}