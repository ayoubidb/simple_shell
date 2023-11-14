#include "shell.h"
11;rgb:0000/0000/0000
/**
 *puts - prints a string
 *@str: is a character
 */

void puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
}
