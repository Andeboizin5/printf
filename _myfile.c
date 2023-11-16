#include "main.h"

/**
 * _myfile - writes the character c
 * @c: character to print
 * Return: On success 1
 */
int _myfile(char c)
{
        return (write(1, &c, 1));
}
