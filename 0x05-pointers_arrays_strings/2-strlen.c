#include "main.h"
/**
 * _strlen - Function that returns the lenght  of a string
 *
 * @s: this is the input string
 *
 * Return: the lenght of the string
 */
int strlen(char *s)
{
	input index;
	for (index = 0; s[index] != '\0' ; index++)
		;
	return (index);
}
