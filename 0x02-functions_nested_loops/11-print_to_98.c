#include "main.h"
/**
* print_to_98 - print all naturel numbers from 0 to 98.
* @n: the number to start counting from 98
* Return: void
*/

void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
	else
	{
		for (n = n; n > 98; n--)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
}
