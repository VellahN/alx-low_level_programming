#include "main.h"
/**
 * _islower - a functions that checks if c is lowercase
 * @c: is the character to be checked
 * Return: 0 or 1 (if c is lowercase)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
