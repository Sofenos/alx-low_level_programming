#include "main.h"
/**
* _isalpha - a function that checks for alphabet
*
* @c: single letter input
*
* Return: 1 if c is a letter (lower or upper case), 0 otherwise
*/

int _isalpha(int c)
{
if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
return (1);
else
return (0);
}
