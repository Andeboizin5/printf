#include "main.h"

/**
 * _myfile - function to print a character
 * @str: string input
 * Return: Always 0
*/
int _myfile(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_puchar(str[i]);
	}
	return (i);
}
