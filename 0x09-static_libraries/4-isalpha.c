#include "main.h"
/**
 * _isalpha - A function that checks for alphabetic character
 * @c: the character to be checked
 * Return: 0 or 1 (if c is letter)
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
