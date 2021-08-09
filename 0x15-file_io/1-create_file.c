#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: file to print
 * @text_content: content
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int o, i = 0;

	if (!filename)
	{
		return (-1);
	}
	o = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (o == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[i])
			i++;
		write(o, text_content, i);
		if (!o)
		{
			return (-1);
		}
	}
	close(o);
	return (1);
}
