/**
 * is_palindrome - is a function
 * @s: string to check
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - return length of a string
 * @s: string to calculate length of
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\n')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the characters recursively
 * @s: string to check
 * @i: iteration
 * @len: length of string
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
