#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - produces output according to a format
 * @format: input
 * @...: next input
 * Return: Always 0
 */
int _printf(const char *format, ...)
{
	int i = 0;
	char *str;
	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					char c = va_arg(args, int);

					_putchar(c);
					i++;
					break;
				case 's':
					const char *str = va_arg(args, const char *);

					while (*str)
						_putchar(*str++);
						i++;
					break;
				case '%':
					_putchar('%');
					i++
					break;
				default:
					i++;
					continue;
			}
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
