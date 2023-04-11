#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints result of multiplication of two
 * numbers, if they both exist
 *
 * @argc: the number of arguments passed to the program
 * @argv: pointer to an array of chars represents
 * arguments passed to the program
 *
 * Return: 0
 * errur : 1
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int n1 = atoi(argv[1]);
		int n2 = atoi(argv[2]);

		printf("%d\n", n1 * n2);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
