#include "main.h"

/**
 * myputs - prints string
 * @str: string input
 * Return: Always 0
*/

int myputs(char *str)
{
	int j;

	if (str)
	{
		for (j = 0; str[j] != '\0'; j++)
		{
			_myfile(str[j]);
		}
	}
	return (j);
}
