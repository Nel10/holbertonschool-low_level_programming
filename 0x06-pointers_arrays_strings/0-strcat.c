#include "holberton.h"

/**
 * *_strcat - function that concatenates two strings.
 * @*dest: pointer
 * @*src: pointer
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x=0; dest[x]; x++)
		;
	for (y=0; src[y]; y++)
	{
		dest[x]=src[y];
		x++;
	}
	dest[x]= '\0';
	return (dest);
}
