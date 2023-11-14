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
	int i, j = 0;
	char *aaa;
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
		else if (format[i] == '%' && format[i + 1] == 'c')
		{
			_putchar(va_arg(args, int));
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			const char *aa = va_arg(args, const char *);

			while (*str)
			{
				_putchar(*aaa++);
				j++;
			}
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar("%%");
			j++;
		}
		j += 1;
	}
	va_end(lists);
	return (j);
}
