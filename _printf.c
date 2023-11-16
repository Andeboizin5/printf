#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: input
 * @...: next input
 * Return: Always 0
 */
int _printf(const char *format, ...)
{
	unsigned int i, k, j = 0;
	va_list lists;

	va_start(lists, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(lists, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_myfile(format[i]);
		}
		else if (format[i] == '%' && format[i + 1] == 'c')
		{
			_myfile(va_arg(lists, int));
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			k = myputs(va_arg(lists, char *));
			i++;
			j += (k - 1);
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			_myfile('%');
		}
		j += 1;
	}

	va_end(lists);
	return (j);
}
