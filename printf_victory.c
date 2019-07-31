#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
#include <string.h>
/**
 * _printf - our own printf
 * @format: string to print it could have
 * inside format specifiers
 * Return: numver of characters printed
*/
int _printf(const char *format, ...)
{
	va_list lista;
	unsigned int i = 0, len;
	int count_victory = 0;

	if (format == NULL || !(strcmp(format, "%")))
	return (-1);

	va_start(lista, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			return (-1);

			else if (format[i + 1] == 'c' || format[i + 1] == 's' ||
										format[i + 1] == 'i' ||
													format[i + 1] == 'd' || format[i + 1] == '%')
			count_victory = count_victory + victory(format[i + 1], lista, &i);

			else
			{
				_putchar(format[i]);
				i++;
			}
		}
		else
		{
			_putchar(format[i]);
			i++;
		}
	} 
va_end(lista);
len = (_strlen(format) + count_victory);
return (len);
}
