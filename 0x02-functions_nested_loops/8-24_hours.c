#include "main.h"
/**
* jack_bauer - a function that print evry minut's of the day
*
* z = hour, a = minutes
*
* / 10 allows second digit to rotate
*
* for loop breaks before passing 24:00
*
* Return: 24 hour clock line by line
*/
void jack_bauer(void)
{
int z, a;

for (z = 0; z < 24; z++)
{
for (a = 0; a < 60; a++)
{
_putchar((z / 10) + '0');
_putchar((z % 10) + '0');
_putchar(':');
_putchar((a / 10) + '0');
_putchar((a % 10) + '0');
_putchar('\n');
}
}
}
