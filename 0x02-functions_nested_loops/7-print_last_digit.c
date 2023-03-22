#include "main.h"
/**
* print_last_digit - a fucntion that print last degit of a number
*
* @ld: number last degit
*
* Return: value of the last degit
*/
int print_last_digit(int ld)
{
int lade;

lade = (ld % 10);
if (lade < 0)
{
lade = (-1 * lade);
}
_putchar(lade + '0');
return (lade);
}
