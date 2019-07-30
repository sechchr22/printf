#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"
#include <limits.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _puts - to print an string
 * @str: name of the pointer
 * Return: always 0
*/
void _puts(char *str)
{
	int i;

	for  (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}
/**
 * _strlen - Return the lenght of a string
 * @s: name of the pointer
 * Return: lenght of the string
*/
int _strlen(const char *s)
{
	int len = 0;

	while (*s != 0)
	{
		s++;
		len++;
	}

	return (len);
}
/**
 * print_char - to print a character
 * @lista: argument from variadic function
 * Return: 1
*/
int print_char(va_list lista)
{
	char c;

	c = va_arg(lista, int);
	_putchar(c);

	return (1);
}
/**
 * print_string - to print a string
 * @lista: argument from variadic function
 * Return: string´s len
*/
int print_string(va_list lista)
{
	char *c;

	c = va_arg(lista, char*);

	if (c == NULL)
	c = "(null)";

	_puts(c);

	return (_strlen(c));
}
