#include "main.h"
/**
 * string_toupper - check the code
 * @ : param
 * Return: Always 0.
 */
char *string_toupper(char *str)
{
	int letter = 0;

	while (str[letter] != '\0')
	{
		if (str[letter] >= 'a' && str[letter] <= 'z')
		{
			str[letter] += -32;
		}
		letter++;
	}
	return (str);
}
