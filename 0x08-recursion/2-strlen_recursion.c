#include "main.h"
/**
 * _strlen_recursion - function
 * @s: param
 * Return: value
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i = _strlen_recursion(s + 1);
		return (++i);
	}
	else
	{
		return (0);
	}
}
