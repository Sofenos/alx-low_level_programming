#include <stdio.h>
/**
 * main -> Program
 *
 * @argc: print number of argumments
 * @argv: Array of size argc
 *
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);

}
