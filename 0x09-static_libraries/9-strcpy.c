#include "main.h"
/**
 * _strcpy - check the code
 * @dest: parameter.
 * @src: parameter.
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}

	dest[count] = '\0';

	return (dest);
}
