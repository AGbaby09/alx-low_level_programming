#include "main.h"
/**
 * _atoi - check the code.
 * @s: parameter.
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int op = 1;
	unsigned int dig = 0;

	do {
		if (*s == '-')
		{
			op = op * -1;
		}
		else if (*s <= '9' && *s >= '0')
		{
			dig = (dig * 10) + (*s - '0');
		}
		else if (dig > 0)
		{
			break;
		}
	} while (*s++);

	return (op * dig);
}
