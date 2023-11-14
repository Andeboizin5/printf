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
	unsigned int i;
	unsigned int str_count;
	unsigned int count = 0;

	if (!format || (format[0] == '%' && !format[1]))
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
			const char *str = va_arg(args, const char *);
		}

		while (*str)
		{
			_putchar(*str++);
			count++;
		}
		i++;
	}
	else if (format[i] == '%' && format[i + 1] == '%')
	{
		_putchar('%');
	}
	count++;

}
