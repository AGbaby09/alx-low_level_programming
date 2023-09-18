#include "main.h"
/**
 * rev_string - check the code.
 * @s: parameter.
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int count = 0;
	int letter = 0;
	int swap;

	while (s[count] != '\0')
	{
		count++;
	}

	while (letter < count / 2)
	{
		swap = s[letter];
		s[letter] = *(s + (count - (letter + 1)));
		*(s + (count - (letter + 1))) = swap;
		letter++;
	}
}
