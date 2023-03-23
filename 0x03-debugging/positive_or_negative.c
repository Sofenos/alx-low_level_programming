#include <stdio.h>
/**
* positive_or_negative - a function the print number status
* @i: variable input
* Return: void return nothing
*/
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
