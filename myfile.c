#include "main.h"

/**
 * _myfile - function to print a character
 * @s: string input
 * Return: Always 0
*/
int _myfile(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		_puchar(s[i]);
	}
	return (i);
}
