#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @c: occurance of the character
 * @s: in the string
 *
 * Return: a pointer to the first occurance of the character
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
