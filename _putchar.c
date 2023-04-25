#include "main.h"

/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/
/**
 * _putchar - stdout the char via write
 * @c: char to print
 * Return: 1 if (Success) and -1 if (UnSuccess)
 **/

int _putchar(char c)
{
	return (buffer(c));
}

/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/
/**
 * buffer - save char in the buffer
 * @c: char
 *
 * Return: 1
 **/

int buffer(char c)
{
	static char buff[BUFFER_SIZE];
	static int i;

	if (c == -1 || i == BUFFER_SIZE)
	{
		write(1, buff, i);
		i = 0;
	}

	if (c != -1)
	{
		buff[i++] = c;
	}

	return (1);
}
