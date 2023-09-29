#include "main.h"
/**
 * _strlen - check the code.
 * @s: parameter.
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int l = 0, count = 0;

	while (l >= 0)
	{
		if (s[l] != '\0')
		{
			count++;
		}
		else
		{
			break;
		}
		l++;
	}

	return (count);
}
