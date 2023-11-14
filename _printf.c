#include "main.h"
#include <stdarg.h>

/**
 * _printf - produces output according to a format
 * @format: input
 * @...: next input
 * Return: Always 0
 */
int _printf(const char *format, ...);
{
	unsigned int i, j, aaa = 0;
	va_list lists;

	va_start(lists, *format);

	if (format == NULL)
		return (-1);
	if (format != NULL || (format[0] == '%' && format[1] != NULL))
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			j = myfile(va_arg(lists, char *));
			i++;
			aaa += j - 1;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			_myfile("%%");
			aaa++;
		}
		aaa += 1;
	}
	va_end(lists);
	return (aaa);
}

