#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int _printf(const char *format, ...)
{
	va_list args;
	int chars_printed = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			switch (*format)
			{
				case 'c':
					char c = va_arg(args, int);

					_putchar(c);
					chars_printed++;
					break;
				case 's':
					const char *str = va_arg(args, const char *);

					while (*str)
					{
						_putchar(*str++);
						chars_printed++;
					}
					break;

				case '%':
					_putchar('%');
					chars_printed++;
					break;
					default;
			}
			_putchar('%');
			_putchar(*format);
			chars_printed += 2;
			break;
		}
	} else
	{
		_putchar(*format);
		chars_printed++;
	}
	format++;
}
