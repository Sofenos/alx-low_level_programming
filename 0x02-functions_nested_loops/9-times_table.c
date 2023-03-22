#include "main.h"
#include "math.h"

/**
* times_table - function that print the  9 times table, starting with 0
*
* r = row, c = colum,, d = digits of current result
*
* Return: time table
*
* add extra space past single digit
*/

void times_table(void)
{
int r, c, d;

for (r = 0; r <= 9; r++)
{
for (c = 1; c <= 9; c++)
{
d = (r * c);
if (c != 0)
{
_putchar(',');
_putchar(' ');
}
if (d >= 10)
{
_putchar((d / 10) + '0');
_putchar((d % 10) + '0');
}
else if (d < 10 && c != 0)
{
_putchar(' ');
_putchar((d % 10) + '0');
}
else
{
_putchar((d % 10) + '0');
}
}
_putchar('\n');
}
}
